#include <iostream>
#include <chrono>
#include <vector>
#include <cmath>
#include <iomanip>
#include "fibonacci.hpp"

using namespace std;
using namespace std::chrono;

void plotFibonacciTime(int n) {
    auto start = high_resolution_clock::now();
    long long classicResult = fibonacci(n);
    auto end = high_resolution_clock::now();
    long long classicTime = duration_cast<microseconds>(end - start).count();

    start = high_resolution_clock::now();
    long long optimizedResult = fibonacci(n);
    end = high_resolution_clock::now();
    long long optimizedTime = duration_cast<microseconds>(end - start).count();

    cout << "Число Фибоначчи " << n << " равно " << classicResult << " (классическая) и " << optimizedResult << " (оптимизированная)" << endl;
    cout << "Время вычисления: " << endl;
    cout << "Классическая реализация: " << classicTime << " микросекунд" << endl;
    cout << "Оптимизированная реализация: " << optimizedTime << " микросекунд" << endl;

    cout << "\nГрафики зависимости времени вычисления от числа Фибоначчи:\n";

    cout << "              Классическая реализация\n";
    cout << "              ----------------------\n";
    cout << " Время (мкс)\n";
    cout << setw(10) << classicTime << "\n";
    cout << "   0  1\n";
    cout << "                   Число Фибоначчи\n\n";

    cout << "              Оптимизированная реализация\n";
    cout << "              -------------------------\n";
    cout << " Время (мкс)\n";
    cout << setw(10) << optimizedTime << "\n";
    cout << "   0  1\n";
    cout << "                   Число Фибоначчи\n";
}

int main() {
    int n;
    cout << "Введите число Фибоначчи: ";
    cin >> n;
    plotFibonacciTime(n);
    return 0;
}






