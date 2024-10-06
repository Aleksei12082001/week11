#include <iostream>
#include "../include/Octagon.hpp"

using namespace std;

int main() {
    Octagon octagon; // создание объекта класса

    cout << "Введите внутренний радиус: ";
    cin >> octagon.innerRadius; // считывание внутреннего радиуса

    // Вычисление площади и периметра
    double area = octagon.calculateArea();
    double perimeter = octagon.calculatePerimeter();

    // Вывод результатов
    cout << "Площадь: " << area << endl;
    cout << "Периметр: " << perimeter << endl;

    return 0;
}

