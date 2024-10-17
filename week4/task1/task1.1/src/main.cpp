#include <iostream>
#include <cstring> // Для strlen и strstr

using namespace std;

int main() {
    const int MAX_STRINGS = 100; // Максимальное количество строк
    const int MAX_LENGTH = 100;   // Максимальная длина строки
    char searchString[MAX_LENGTH];
    char strings[MAX_STRINGS][MAX_LENGTH];
    int count = 0;
    int n = 0;

    // Ввод строки для поиска
    cout << "Что ищем: ";
    cin >> searchString;

    // Ввод строк
    cout << "Введите строки (введите 'end' для завершения ввода):" << endl;
    while (true) {
        cin >> strings[n];
        if (strcmp(strings[n], "end") == 0) {
            break;
        }
        n++;
    }

    // Подсчет вхождений
    for (int i = 0; i < n; i++) {
        char* ptr = strings[i];
        while ((ptr = strstr(ptr, searchString)) != nullptr) {
            count++;
            ptr++; // Продвигаем указатель, чтобы искать следующее вхождение
        }
    }

    // Вывод результата
    cout << "Количество вхождений: " << count << endl;

    return 0;
}
