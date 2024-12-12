#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include <chrono>
#include "numbers.hpp"

using namespace std;

int main() {
    WorkStealingQueue queue;
    atomic<int> primeCount(0);
    vector<thread> threads;
    vector<int> numbers;

    int number;
    cout << "Введите числа (введите -1 для завершения ввода):" << endl;

    while (true) {
        cin >> number;
        if (number == -1) {
            break;
        }
        numbers.push_back(number);
    }

    auto start = chrono::high_resolution_clock::now();

    for (int num : numbers) {
        queue.push(num);
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

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "Общее количество простых чисел (Work Stealing): " << primeCount.load() << endl;
    cout << "Время вычисления (Work Stealing): " << duration.count() << " секунд" << endl;

    primeCount = 0;
    threads.clear();

    start = chrono::high_resolution_clock::now();
    distributeEvenly(numbers, primeCount);
    end = chrono::high_resolution_clock::now();
    duration = end - start;

    cout << "Общее количество простых чисел (равномерное распределение): " << primeCount.load() << endl;
    cout << "Время вычисления (равномерное распределение): " << duration.count() << " секунд" << endl;

    return 0;
}










