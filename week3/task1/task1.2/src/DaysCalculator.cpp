#include <iostream>
#include "DaysCalculator.hpp"

using namespace std;

int getDaysInMonth(int month, int year) {
    int days;

    // Проверка на високосный год
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Определяем количество дней в месяце
    switch (month) {
        case 1: // Январь
        case 3: // Март
        case 5: // Май
        case 7: // Июль
        case 8: // Август
        case 10: // Октябрь
        case 12: // Декабрь
            days = 31;
            break;
        case 4: // Апрель
        case 6: // Июнь
        case 9: // Сентябрь
        case 11: // Ноябрь
            days = 30;
            break;
        case 2: // Февраль
            days = isLeapYear ? 29 : 28; // Високосный или обычный год
            break;
        default:
            cout << "Некорректный номер месяца." << endl;
            return -1; // Возвращаем -1 для некорректного ввода
    }

    return days;
}
