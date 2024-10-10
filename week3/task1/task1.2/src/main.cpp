#include <iostream>
#include "DaysCalculator.hpp"

using namespace std;

int main() {
    int month, year;

    // Запрашиваем ввод месяца и года
    cout << "Введите номер месяца (1-12): ";
    cin >> month;
    cout << "Введите год: ";
    cin >> year;

    int days = getDaysInMonth(month, year);

    if (days != -1) { // Проверяем на некорректный ввод
        // Выводим результат
        cout << "Количество дней в " << month << " месяце " << year << " года: " << days << endl;
    }

    return 0;
}
