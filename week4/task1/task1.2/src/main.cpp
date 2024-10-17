#include <iostream>
#include <string>
#include <iomanip>
#include "Shannon.hpp"

using namespace std;

int main() {
    string input;

    cout << "Введите строку: ";
    getline(cin, input); // Читаем строку с пробелами

    if (input.empty()) {
        cout << "Строка пуста." << endl;
        return 1; // Возвращаем код ошибки
    }

    double entropy = calculateShannonEntropy(input);
    
    // Выводим результат с двумя знаками после запятой
    cout << fixed << setprecision(2) << entropy << endl;

    return 0;
}

