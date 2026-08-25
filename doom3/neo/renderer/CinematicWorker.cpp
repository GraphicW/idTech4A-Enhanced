#include "../idlib/precompiled.h"
#pragma hdrstop

#include "tr_local.h"

#include "CinematicManager.h"
#include "CinematicWorker.h"

idCinematicWorker cinematicWorker;

idCinematicWorker::idCinematicWorker()
{
}

void idCinematicWorker::Init()
{
    common->Printf(
        "[CinematicWorker] Init\n"
    );
}

void idCinematicWorker::Shutdown()
{
    common->Printf(
        "[CinematicWorker] Shutdown\n"
    );

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
        //
        // Request consumed.
        //
        // Do NOT call ImageForTime() here yet.
        // The renderer still owns decoding and upload.
        //
    }
}