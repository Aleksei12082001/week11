#include <iostream>
#include "string.hpp"

using namespace std;

int main() {
    const int MAX_STRINGS = 100; // Максимальное количество строк
    const int MAX_LENGTH = 100;   // Максимальная длина строки
    char searchString[MAX_LENGTH];
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n = 0;

    // Ввод строки для поиска
    cout << "Что ищем: ";
    cin >> searchString;

    // Ввод строк
    cout << "Введите строки (введите 'end' для завершения ввода):" << endl;
    while (true) {
        cin >> strings[n];
        if (myStrCmp(strings[n], "end")) {
            break;
        }
        n++;
    }

    // Подсчет вхождений
    int count = countOccurrences(searchString, strings, n);

    // Вывод результата
    cout << "Количество вхождений: " << count << endl;

    return 0;
}

