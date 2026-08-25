#ifndef __CINEMATIC_MANAGER_H__
#define __CINEMATIC_MANAGER_H__

struct cinematicRequest_t
{
    idCinematic *cinematic;
    idImage *image;

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
        idCinematic *cin,
        idImage *image,
        int time,
        int frameNumber
    );

    int NumRequests() const;

private:
    idList<cinematicRequest_t> requests;
};

extern idCinematicManager cinematicManager;

#endif