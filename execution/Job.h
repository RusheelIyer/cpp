#include <memory>

template<typename T, class ClassificationResult>

#ifndef JOB_H
#define JOB_H

class Job {
    private:
        std::unique_ptr<T> task;
        std::unique_ptr<ClassificationResult> result;

    public:
        //Job constructor
        Job(std::unique_ptr<T> task, std::unique_ptr<ClassificationResult> result);

        //ClassificationResult& result() const;

        // set the new result once the task has been completed
        void setResult(std::unique_ptr<ClassificationResult> result);

        // return the result of the task
        std::unique_ptr<ClassificationResult> take();

        // check if the task has been completed or not
        bool finished();
};

#endif // JOB_H
