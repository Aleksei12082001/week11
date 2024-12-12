#include <iostream>
#include <chrono>
#include <vector>
#include "../include/fibonacci.hpp"

using namespace std;

int main() {
    vector<int> n_values;
    vector<double> classic_times;
    vector<double> optimized_times;

    string input; 
    cout << "Данные для построения графиков:\n"; 
    cout << "n\tClassic\tOptimized\n"; 

    while (true) {
        cout << "Введите число Фибоначчи (или 0 для выхода, c для очистки): ";
        cin >> input;

        if (input == "0") {
            break; 
        } else if (input == "c") {
           
            n_values.clear();
            classic_times.clear();
            optimized_times.clear();
            cout << "Данные очищены.\n";
            continue; 
        }

        int n = stoi(input); // Преобразуем строку в целое число
        n_values.push_back(n);

        auto start = chrono::high_resolution_clock::now();
        fibonacci_classic(n);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> classic_time = end - start;
        classic_times.push_back(classic_time.count());

        start = chrono::high_resolution_clock::now();
        fibonacci_optimized(n);
        end = chrono::high_resolution_clock::now();
        chrono::duration<double> optimized_time = end - start;
        optimized_times.push_back(optimized_time.count());

        
        cout << n << "\t" << classic_times.back() << "\t" << optimized_times.back() << "\n";
    }

    return 0;
}








