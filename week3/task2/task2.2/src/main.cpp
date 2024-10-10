#include <iostream>
#include "Heron.hpp"

using namespace std;

int main() {
    double number;

    cout << "Введите число для вычисления квадратного корня: ";
    cin >> number;

    double result = calculateSquareRoot(number);

    if (result != -1) { // Проверяем на некорректный ввод
        // Выводим результат
        cout << "Квадратный корень из " << number << " равен примерно " << result << endl;
    }

    return 0;
}
