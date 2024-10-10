#include <iostream>
#include "Sort.hpp"
#include "MergeSort.hpp"

using namespace std;

int main() {
    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    if (size <= 0) {
        cout << "Размер массива должен быть положительным." << endl;
        return 1;
    }

    double* data_array = new double[size];

    cout << "Введите " << size << " элементов массива: ";
    for (int i = 0; i < size; i++) {
        cin >> data_array[i];
    }

    cout << "Исходный массив: ";
    printArray(data_array, size);

    mergeSort(data_array, 0, size - 1);

    cout << "Отсортированный массив: ";
    printArray(data_array, size);

    delete[] data_array;
    return 0;
}
