#include <deque>
#include "JobQueue.h"
#include "Job.h"

// Constructors implementation
JobQueue::JobQueue(std::deque<std::unique_ptr<Job>> jobs) {
    this->jobs = jobs;
    this->in_progress = jobs.size();
}

JobQueue::JobQueue(std::unique_ptr<Job> job) {
    if (this->in_progress == 0) {
        this->jobs.push_back(job);
        this->in_progress++;
    } else {
        throw "JobQueue already exists. Add queue using method queue()";
    }
}

//queue implementation
void JobQueue::queue(std::unique_ptr<Job> newJob) {
    jobs.push_front(newJob);
    this->in_progress++;
}

//get_next implementation
std::unique_ptr<Job> JobQueue::get_next() {
    if (this->in_progress == 0)
        return {};
    else
        return jobs.pop_front();
        this->in_progress--;
}

//TODO: store implementation
void JobQueue::store(std::unique_ptr<Job> job) {

}

//TODO: wait implementation
void JobQueue::wait() {

}
