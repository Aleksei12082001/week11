

#ifndef POWER_HPP
#define POWER_HPP

#include <iostream>
using namespace std;

class Power {
private:
    int power; // Мощность двигателя

public:
    // Конструктор
    Power(int enginePower);

    // Метод для получения мощности двигателя
    int getPower() const;
};

#endif // POWER_HPP

