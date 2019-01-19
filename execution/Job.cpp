#include "Job.h"
#include <memory>

template<typename T, class ClassificationResult>

//Job constructor implementation
Job::Job(std::unique_ptr<T> task, std::unique_ptr<ClassificationResult> result) {
    this->task = task;
    this->result = result;
}

// TODO: result implementation
ClassificationResult& Job::result() const {

}

// setResult implementation
void Job::setResult(std::unique_ptr<ClassificationResult> result) {
    this->result = result;
}

// take implementation
std::unique_ptr<ClassificationResult> Job::take() {
    return this->result.value();
}

// TODO: finished-method implementation
bool Job::finished() {

}
