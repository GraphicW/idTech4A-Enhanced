#include "../idlib/precompiled.h"
#pragma hdrstop

#include "tr_local.h"
#include "CinematicManager.h"

idCinematicManager cinematicManager;

void idCinematicManager::Register(
    idCinematic *cin,
    idImage *image,
    int time,
    int frameNumber
)
{
    if (!cin || !image) {
        return;
    }

    idCriticalSectionLockGuard lock(CRITICAL_SECTION_THREE);

    for (int i = 0; i < requests.Num(); i++) {
        cinematicRequest_t &req = requests[i];

        if (req.image == image) 
        {
            if (req.frameNumber == frameNumber)
            {
                return;
            }

            req.requestedTime = time;
            req.frameNumber = frameNumber;
            req.pending = true;
            return;
        }
    }

    cinematicRequest_t req;

    req.cinematic = cin;
    req.image = image;
    req.requestedTime = time;
    req.frameNumber = frameNumber;
    req.pending = true;

    requests.Append(req);

    common->Printf(
        "CIN REGISTER image=%p count=%d\n",
        image,
        requests.Num()
    );
}

int idCinematicManager::NumRequests() const
{
    return requests.Num();
}