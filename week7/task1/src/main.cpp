#include <iostream>
#include <string>
#include "symbols.hpp"

using namespace std;

int main() {
    string input;
    
    cout << "Введите строку: ";
    getline(cin, input); // Читаем всю строку, включая пробелы

    auto result = findMostFrequentChar(input);
    
    if (result.first != '\0') {
        cout << "Наиболее часто встречающийся символ: " << result.first << " " << result.second << " раз(а)" << endl;
        cout << "[" << result.first << "," << result.second << "]" << endl; // Форматированный вывод
    } else {
        cout << "Нет символов в строке." << endl;
    }

    return 0;
}
