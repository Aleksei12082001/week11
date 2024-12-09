#include <ctime>
#include "../include/goods.h"

time_t goods(int year, int month, int day) {
    tm date = {};
    date.tm_year = year - 1900; // Год с 1900
    date.tm_mon = month - 1;     // Месяц (0 - январь, 1 - февраль)
    date.tm_mday = day;          // День месяца
    return mktime(&date);        // Преобразуем в time_t
}

