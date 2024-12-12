#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include "numbers.hpp"

using namespace std;

int main() {
    WorkStealingQueue queue;
    atomic<int> primeCount(0);
    vector<thread> threads;

    int number;
    cout << "Введите числа (введите -1 для завершения ввода):" << endl;

    while (true) {
        cin >> number;
        if (number == -1) {
            break;
        }
        queue.push(number);
    }

    for (int i = 0; i < 4; ++i) {
        queue.push(-1);
    }

    for (int i = 0; i < 4; ++i) {
        threads.emplace_back(worker, ref(queue), ref(primeCount));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    cout << "Общее количество простых чисел: " << primeCount.load() << endl;
    return 0;
}










