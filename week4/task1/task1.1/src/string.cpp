#include "string.hpp"

bool myStrCmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 == *str2; // Возвращает true, если строки равны
}

const char* myStrStr(const char* haystack, const char* needle) {
    if (!*needle) return haystack; // Если needle пустая, возвращаем haystack

    for (const char* p = haystack; *p; p++) {
        const char* p1 = p;
        const char* p2 = needle;

        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        if (!*p2) return p; // Если дошли до конца needle, нашли вхождение
    }

    return nullptr; // Вхождение не найдено
}

int countOccurrences(const char* searchString, char strings[][100], int n) {
    int count = 0;

    // Подсчет вхождений
    for (int i = 0; i < n; i++) {
        const char* ptr = strings[i];
        while ((ptr = myStrStr(ptr, searchString)) != nullptr) {
            count++;
            ptr++; // Продвигаем указатель, чтобы искать следующее вхождение
        }
    }

    return count;
}

