#include <deque>
#include "Job.h"

#ifndef JOBQUEUE_H
#define JOBQUEUE_H

template<class Job>

class JobQueue {

    private:
        std::deque<std::unique_ptr<Job>> jobs;
        unsigned int in_progress = 0;

    public:

        //JobQueue constructor to initialise a job queue with a predefined std::deque of Jobs
        JobQueue(std::deque<std::unique_ptr<Job>> jobs);

        //JobQueue constructor to create a new JobQueue with a single new job
        JobQueue(std::unique_ptr<Job> job);

        //add a job to the queue
        void queue(std::unique_ptr<Job> newJob);

        //returns the next job in the queue
        std::unique_ptr<Job> get_next();

        //store completed job back in the queue
        void store(std::unique_ptr<Job> job);

        // blocks outside calls till all jobs in the queue are finished
        void wait();


};


#endif // JOBQUEUE_H
