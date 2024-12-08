#include <iostream>
#include "perms.hpp"

using namespace std;

int main() {
    int size;
    cout << "Введите количество элементов: ";
    cin >> size;

    int* input = new int[size];
    cout << "Введите элементы: ";
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int totalPerms = 0;
    int** output = perms(input, size, totalPerms);

    cout << "Уникальные перестановки:\n";
    for (int i = 0; i < totalPerms; i++) {
        cout << "[";
        for (int j = 0; j < size; j++) {
            cout << output[i][j];
            if (j < size - 1) cout << ", ";
        }
        cout << "]\n";
    }

    // Освобождение памяти
    for (int i = 0; i < totalPerms; i++) {
        delete[] output[i];
    }
    delete[] output;
    delete[] input;

    return 0;
}





