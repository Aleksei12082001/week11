#ifndef NUMBERS_HPP
#define NUMBERS_HPP

#include <atomic>
#include <deque>
#include <mutex>
#include <condition_variable>

using namespace std;

class WorkStealingQueue {
private:
    deque<int> queue;
    mutex mtx;
    condition_variable cv;

public:
    void push(int n);
    bool steal(int& n);
    bool pop(int& n);
};

void worker(WorkStealingQueue& queue, atomic<int>& primeCount);
bool isPrime(int n);

#endif








