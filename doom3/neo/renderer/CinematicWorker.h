#ifndef __CINEMATIC_WORKER_H__
#define __CINEMATIC_WORKER_H__

class idCinematic;

struct cinematicFrame_t
{
    idCinematic* cinematic;

    int time;

    int width;
    int height;

    idList<byte> pixels;

    cinematicFrame_t()
        : cinematic(NULL),
        time(0),
        width(0),
        height(0)
    {
    }
};

class idCinematicWorker
{
public:
    idCinematicWorker();

    void Init();
    void Shutdown();

    void Pump();

private:
    idList<cinematicFrame_t> completedFrames;
};

extern idCinematicWorker cinematicWorker;

#endif