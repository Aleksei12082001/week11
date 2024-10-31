#include <iostream>
#include <string>
#include "file.hpp" // Подключаем заголовочный файл

using namespace std;

int main() {
    string filename = "/home/aleksei/week5/task1/A/src/file.txt"; 

    if (!readFile(filename)) {
        return 1; // Завершаем программу с кодом ошибки
    }

    return 0; // Успешное завершение программы
}



