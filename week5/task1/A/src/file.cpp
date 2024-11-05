#include <iostream>
#include <fstream>
#include <string>
#include "file.hpp"

using namespace std;

bool readFile(const string &filename) {
    ifstream file(filename);

    // Проверка на возможность открытия файла
    if (!file.is_open()) {
        cerr << "Ошибка: не удалось открыть файл '" << filename << "'." << endl;
        return false; // Возвращаем false при ошибке
    }

    string line;
    bool isEmpty = true;

    // Чтение содержимого файла
    while (getline(file, line)) {
        cout << line << endl;
        isEmpty = false; // Если хотя бы одна строка была прочитана, файл не пустой
    }

    // Проверка на пустой файл
    if (isEmpty) {
        cerr << "Ошибка: файл '" << filename << "' пуст." << endl;
    }

    file.close(); // Закрываем файл
    return true; // Возвращаем true при успешном чтении
}

