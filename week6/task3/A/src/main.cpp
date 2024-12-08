#include <iostream>
#include <vector>
#include "duplicate.hpp"

using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    vector<int> inputArray(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> inputArray[i];
    }

    cout << "Входной массив: ";
    for (int num : inputArray) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> uniqueArray = removeDuplicates(inputArray);

    cout << "Массив без дубликатов: ";
    for (int num : uniqueArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}




