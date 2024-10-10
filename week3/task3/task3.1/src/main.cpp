#include <iostream>
#include "Array.hpp"

using namespace std;

int main() {
    const int SIZE = 100; 
    double data_array[SIZE];
    int count = 0; 
    double max_value = -1e9; 
    int n;

    getNumbers(data_array, n, SIZE, max_value, count); // Ввод чисел и обработка

    cout << "Количество чисел, равных максимальному (" << max_value << "): " << count << endl;

    return 0;
}

