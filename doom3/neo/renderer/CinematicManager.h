#ifndef __CINEMATIC_MANAGER_H__
#define __CINEMATIC_MANAGER_H__

class idCinematic;
class idImage;

struct cinematicRequest_t
{
    idCinematic* cinematic;
    idImage* image;

    int requestedTime;
    int frameNumber;

    bool pending;

    cinematicRequest_t()
        : cinematic(NULL),
        image(NULL),
        requestedTime(0),
        frameNumber(0),
        pending(false)
    {
    }
};

class idCinematicManager
{
public:
    void Register(
        idCinematic* cinematic,
        idImage* image,
        int requestedTime,
        int frameNumber
    );

    bool TakePendingRequest(
        cinematicRequest_t& request
    );

    void Cancel(
        idCinematic* cinematic
    );

    void Clear();

    int NumRequests() const;

private:
    idList<cinematicRequest_t> requests;
};

extern idCinematicManager cinematicManager;

#endif