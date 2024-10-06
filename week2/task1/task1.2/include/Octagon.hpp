#ifndef OCTAGON_HPP
#define OCTAGON_HPP

class Octagon {
public:
    double innerRadius; // Внутренний радиус

    // Метод для вычисления длины стороны
    double calculateSideLength();

    // Метод для вычисления площади
    double calculateArea();

    // Метод для вычисления периметра
    double calculatePerimeter();
};

#endif // OCTAGON_HPP

