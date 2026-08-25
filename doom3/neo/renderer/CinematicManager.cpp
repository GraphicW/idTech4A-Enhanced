#include "../idlib/precompiled.h"
#pragma hdrstop

#include "tr_local.h"
#include "CinematicManager.h"

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

    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    for (int i = 0; i < requests.Num(); i++)
    {
        cinematicRequest_t& req = requests[i];
        if (req.cinematic == cinematic)
        {
            //
            // same cinematic already tracked
            //

            if (req.frameNumber == frameNumber)
            {
                //
                // same frame:
                // keep newest requested time
                //

                if (requestedTime > req.requestedTime)
                {
                    req.requestedTime = requestedTime;
                }

                return;
            }

            req.image = image;
            req.requestedTime = requestedTime;
            req.frameNumber = frameNumber;
            req.pending = true;

            return;
        }
    }

    cinematicRequest_t req;

    req.cinematic = cinematic;
    req.image = image;
    req.requestedTime = requestedTime;
    req.frameNumber = frameNumber;
    req.pending = true;

    requests.Append(req);
}

bool idCinematicManager::TakePendingRequest(
    cinematicRequest_t& request
)
{
    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    for (int i = 0; i < requests.Num(); i++)
    {
        if (requests[i].pending)
        {
            request = requests[i];
            requests[i].pending = false;
            return true;
        }
    }

    return false;
}

void idCinematicManager::Cancel(
    idCinematic* cinematic
)
{
    if (!cinematic)
    {
        return;
    }

    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    for (int i = requests.Num() - 1; i >= 0; i--)
    {
        if (requests[i].cinematic == cinematic)
        {
            requests.RemoveIndex(i);
        }
    }
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

