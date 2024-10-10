#include <iostream>
#include "Age.hpp"

using namespace std;

int main() {
    int age;

    cout << "Введите ваш возраст: ";
    cin >> age;

    // Проверка на неотрицательное значение
    if (age < 0) {
        cout << "Возраст не может быть отрицательным." << endl;
        return 1;
    }

    cout << "Ваш возраст: ";
    Age(age);  

    return 0;
}
