#include <iostream>
#include <cmath>
#include "Heron.hpp"

using namespace std;

double calculateSquareRoot(double number) {
    if (number < 0) {
        cout << "Квадратный корень из отрицательного числа не существует." << endl;
        return -1; // Возвращаем -1 для некорректного ввода
    }

    double guess = number / 2.0; 
    double epsilon = 0.00001; 

    // Итерационная формула Герона
    while (abs(guess * guess - number) >= epsilon) {
        guess = (guess + number / guess) / 2.0; 
    }

    return guess;
}
