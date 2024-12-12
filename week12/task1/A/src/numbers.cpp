#include "numbers.hpp"

void WorkStealingQueue::push(int n) {
    lock_guard<mutex> lock(mtx);
    queue.push_back(n);
    cv.notify_one();
}

bool WorkStealingQueue::steal(int& n) {
    lock_guard<mutex> lock(mtx);
    if (queue.empty()) return false;
    n = queue.front();
    queue.pop_front();
    return true;
}

bool WorkStealingQueue::pop(int& n) {
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, [this] { return !queue.empty(); });
    n = queue.front();
    queue.pop_front();
    return true;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void worker(WorkStealingQueue& queue, atomic<int>& primeCount) {
    int number;
    while (true) {
        if (queue.pop(number)) {
            if (number == -1) break;
            if (isPrime(number)) {
                primeCount++;
            }
        }
    }
}











