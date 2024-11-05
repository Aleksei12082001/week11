#include <iostream>
#include <string>
#include "file.hpp" // Подключаем заголовочный файл

using namespace std;

int main(int argc, char *argv[]) {
    // Проверка на наличие аргументов
    if (argc < 2) {
        cerr << "Ошибка: Не указано имя файла." << endl;
        return 1; // Завершаем программу с кодом ошибки
    }

    string filename = argv[1]; // Получаем имя файла из аргументов

    if (!readFile(filename)) {
        return 1; // Завершаем программу с кодом ошибки
    }

    return 0; // Успешное завершение программы
}




