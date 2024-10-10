#include <iostream>
#include "Pyramid.hpp"

using namespace std;

int main() {
    int height;

    cout << "Введите высоту пирамиды: ";
    cin >> height;

    pyramid(height);  // Вызов функции для рисования пирамиды

    return 0;
}

