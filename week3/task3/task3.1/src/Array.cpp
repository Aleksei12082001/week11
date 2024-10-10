#include <iostream>
#include "Array.hpp"

using namespace std;

void getNumbers(double data_array[], int& n, int SIZE, double& max_value, int& count) {  // Изменено на getNumbers
    cout << "Введите количество чисел (максимум " << SIZE << "): ";
    cin >> n;

    if (n > SIZE || n <= 0) {
        cout << "Некорректное количество чисел." << endl;
        exit(1); // Завершение программы в случае некорректного ввода
    }

    cout << "Введите числа: ";
    for (int i = 0; i < n; i++) {
        cin >> data_array[i];

        if (data_array[i] > max_value) {
            max_value = data_array[i];
            count = 1; 
        } else if (data_array[i] == max_value) {
            count++; 
        }
    }
}

