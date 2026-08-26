#ifndef __CINEMATIC_WORKER_H__
#define __CINEMATIC_WORKER_H__

class idCinematic;

struct cinematicFrame_t
{
    idCinematic* cinematic;
    idImage* image;

    int frameNumber;
    int requestedTime;

    int width;
    int height;

    idList<byte> pixels;

    cinematicFrame_t()
        : cinematic(NULL),
        image(NULL),
        frameNumber(0),
        requestedTime(0),
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

    bool TakeCompletedFrame(
        cinematicFrame_t& frame
    );

    void DiscardCompletedFrames(
        idCinematic* cinematic
    );

private:
    static void* WorkerThread(void* data);
    
    xthreadInfo workerThread;

    volatile bool shutdownRequested;
    volatile bool threadFinished;

    idList<cinematicFrame_t> completedFrames;

    void PublishCompletedFrame(
        const cinematicFrame_t& frame
    );
};

extern idCinematicWorker cinematicWorker;

#endif