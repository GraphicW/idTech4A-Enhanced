#include "../idlib/precompiled.h"
#pragma hdrstop

#include "tr_local.h"

#include "CinematicManager.h"
#include "CinematicWorker.h"

idCinematicWorker cinematicWorker;

idCinematicWorker::idCinematicWorker()
    : shutdownRequested(false),
    threadFinished(false)
{
    memset(
        &workerThread,
        0,
        sizeof(workerThread)
    );
}

void* idCinematicWorker::WorkerThread(void* data)
{
    idCinematicWorker* worker =
        static_cast<idCinematicWorker*>(data);

    worker->threadFinished = false;

    common->Printf(
        "[CinematicWorker] Thread started\n"
    );

    while (!worker->shutdownRequested)
    {
        Sys_WaitForEvent(
            TRIGGER_EVENT_CINEMATIC_WORKER
        );

        if (worker->shutdownRequested)
        {
            break;
        }

        worker->Pump();
    }

    common->Printf(
        "[CinematicWorker] Thread stopped\n"
    );

    worker->threadFinished = true;

    Sys_TriggerEvent(
        TRIGGER_EVENT_CINEMATIC_WORKER_FINISHED
    );

    return NULL;
}

void idCinematicWorker::Init()
{
    common->Printf(
        "[CinematicWorker] Init\n"
    );

    shutdownRequested = false;
    threadFinished = false;

    Sys_CreateThread(
        WorkerThread,
        this,
        THREAD_NORMAL,
        workerThread,
        "CinematicWorker",
        g_threads,
        &g_thread_count
    );
}

void idCinematicWorker::Shutdown()
{
    common->Printf(
        "[CinematicWorker] Shutdown\n"
    );

    shutdownRequested = true;

    Sys_TriggerEvent(
        TRIGGER_EVENT_CINEMATIC_WORKER
    );

    if (workerThread.threadHandle)
    {
        Sys_DestroyThread(
            workerThread
        );
    }

    while (!threadFinished)
    {
        Sys_WaitForEvent(
            TRIGGER_EVENT_CINEMATIC_WORKER_FINISHED
        );
    }

    completedFrames.Clear();
}

void idCinematicWorker::Pump()
{
    cinematicRequest_t request;

    while (
        cinematicManager.TakePendingRequest(
            request
        )
        )
    {
        cinData_t cin =
            request.cinematic->ImageForTime(
                request.requestedTime
            );

        cinematicFrame_t frame;
        bool haveFrame = false;

        if (
            cin.image &&
            cin.imageWidth > 0 &&
            cin.imageHeight > 0
            )
        {
            frame.cinematic = request.cinematic;
            frame.image = request.image;

            frame.frameNumber =
                request.frameNumber;

            frame.requestedTime =
                request.requestedTime;

            frame.width =
                cin.imageWidth;

            frame.height =
                cin.imageHeight;

            const int pixelBytes =
                cin.imageWidth *
                cin.imageHeight *
                4;

            frame.pixels.SetNum(
                pixelBytes
            );

            memcpy(
                frame.pixels.Ptr(),
                cin.image,
                pixelBytes
            );

            haveFrame = true;
        }

        const bool valid =
            cinematicManager.CompleteRequest(
                request.cinematic
            );

        if (haveFrame && valid)
        {
            PublishCompletedFrame(
                frame
            );
        }
    }
}

void idCinematicWorker::PublishCompletedFrame(
    const cinematicFrame_t& frame
)
{
    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    for (int i = 0; i < completedFrames.Num(); i++)
    {
        if (completedFrames[i].cinematic == frame.cinematic)
        {
            // Replace an older unconsumed frame for this cinematic.
            completedFrames[i] = frame;
            return;
        }
    }

    completedFrames.Append(frame);
}

bool idCinematicWorker::TakeCompletedFrame(
    cinematicFrame_t& frame
)
{
    idCriticalSectionLockGuard lock(
        CRITICAL_SECTION_CINEMATIC
    );

    if (completedFrames.Num() <= 0)
    {
        return false;
    }

    frame = completedFrames[0];
    completedFrames.RemoveIndex(0);

    return true;
}

void idCinematicWorker::DiscardCompletedFrames(
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

    for (int i = completedFrames.Num() - 1; i >= 0; i--)
    {
        if (completedFrames[i].cinematic == cinematic)
        {
            completedFrames.RemoveIndex(i);
        }
    }
}