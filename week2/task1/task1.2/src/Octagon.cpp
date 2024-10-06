#include <cmath> // Для использования sqrt и pow
#include "../include/Octagon.hpp"

// Метод для вычисления длины стороны
double Octagon::calculateSideLength() {
    return 2 * innerRadius / (1 + sqrt(2)); // Длина стороны
}

// Метод для вычисления площади
double Octagon::calculateArea() {
    double length = calculateSideLength(); // Получаем длину стороны
    return 2 * (1 + sqrt(2)) * pow(length, 2); // Площадь
}

// Метод для вычисления периметра
double Octagon::calculatePerimeter() {
    double length = calculateSideLength(); // Получаем длину стороны
    return 8 * length; // Периметр
}

