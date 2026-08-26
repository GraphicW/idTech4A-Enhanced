#include "../idlib/precompiled.h"
#pragma hdrstop

#include "tr_local.h"
#include "CinematicManager.h"
#include "CinematicWorker.h"

idCinematicManager cinematicManager;

void idCinematicManager::Register(
    idCinematic* cinematic,
    idImage* image,
    int requestedTime,
    int frameNumber)
{
    if (!cinematic || !image)
    {
        return;
    }

    bool wakeWorker = false;

    {
        idCriticalSectionLockGuard lock(
            CRITICAL_SECTION_CINEMATIC
        );

        for (int i = 0; i < requests.Num(); i++)
        {
            cinematicRequest_t& req = requests[i];

            if (req.cinematic != cinematic)
            {
                continue;
            }

            if (req.canceled)
            {
                return;
            }

            if (req.frameNumber == frameNumber)
            {
                if (requestedTime > req.requestedTime)
                {
                    req.requestedTime = requestedTime;
                    req.image = image;

                    // If a decode is currently running, this remains pending
                    // and will be taken after the in-flight request completes.
                    req.pending = true;

                    // Waking is only necessary when the worker isn't already busy.
                    if (!req.inFlight)
                    {
                        wakeWorker = true;
                    }
                }
            }

            else
            {
                // Ignore exact duplicates.
                if (
                    req.frameNumber == frameNumber &&
                    req.requestedTime == requestedTime
                    )
                {
                    break;
                }

                req.image = image;
                req.requestedTime = requestedTime;
                req.frameNumber = frameNumber;
                req.pending = true;
                wakeWorker = true;
            }

            break;
        }

        if (!wakeWorker)
        {
            bool found = false;

            for (int i = 0; i < requests.Num(); i++)
            {
                if (requests[i].cinematic == cinematic)
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cinematicRequest_t req;

                req.cinematic = cinematic;
                req.image = image;
                req.requestedTime = requestedTime;
                req.frameNumber = frameNumber;
                req.pending = true;

                requests.Append(req);
                wakeWorker = true;
            }
        }
    }

#ifdef _MULTITHREAD
    if (wakeWorker)
    {
        Sys_TriggerEvent(
            TRIGGER_EVENT_CINEMATIC_WORKER
        );
    }
#endif
}

bool idCinematicManager::TakePendingRequest(
    cinematicRequest_t& request)
{
    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    for (int i = 0; i < requests.Num(); i++)
    {
        cinematicRequest_t& req = requests[i];

        if (!req.pending ||
            req.inFlight ||
            req.canceled)
        {
            continue;
        }

        request = req;

        req.pending = false;
        req.inFlight = true;

        return true;
    }

    return false;
}

bool idCinematicManager::CompleteRequest(
    idCinematic* cinematic
)
{
    if (!cinematic)
    {
        return false;
    }

    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    for (int i = 0; i < requests.Num(); i++)
    {
        cinematicRequest_t& req = requests[i];

        if (req.cinematic == cinematic)
        {
            req.inFlight = false;

            // The worker may publish its copied frame only when
            // the cinematic wasn't canceled during decoding.
            return !req.canceled;
        }
    }

    // The request may already have been removed.
    return false;
}

void idCinematicManager::Cancel(
    idCinematic* cinematic
)
{
    common->Printf(
        "[Cancel] cinematic=%p\n",
        cinematic
    );

    if (!cinematic)
    {
        return;
    }

    for (;;)
    {
        bool found = false;
        bool inFlight = false;

        {
            idCriticalSectionLockGuard lock(
                CRITICAL_SECTION_CINEMATIC
            );

            for (int i = 0; i < requests.Num(); i++)
            {
                cinematicRequest_t& req = requests[i];

                if (req.cinematic != cinematic)
                {
                    continue;
                }

                found = true;
                req.canceled = true;
                req.pending = false;
                inFlight = req.inFlight;

                if (!inFlight)
                {
                    requests.RemoveIndex(i);
                }

                break;
            }
        }

        if (!found || !inFlight)
        {
            break;
        }

        Sys_Msleep(1);
    }

    cinematicWorker.DiscardCompletedFrames(
        cinematic
    );

    common->Printf(
        "[Cancel Done] cinematic=%p\n",
        cinematic
    );

}


void idCinematicManager::Clear()
{
    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    requests.Clear();
}

int idCinematicManager::NumRequests() const
{
    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    return requests.Num();
}