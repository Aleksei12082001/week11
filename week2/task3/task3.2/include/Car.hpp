#ifndef CAR_HPP
#define CAR_HPP

#include "Power.hpp"
#include "Passenger.hpp"
#include <string>
#include <iostream>
using namespace std;

class Car {
private:
    string model; // Модель автомобиля
    Power power; // Мощность автомобиля
    Passenger* passenger1; // Первый пассажир
    Passenger* passenger2; // Второй пассажир

public:
    // Конструктор
    Car(string carModel, Power carPower);

    // Метод для добавления пассажира
    void addPassenger(Passenger* passenger);

    // Метод для удаления пассажира
    void removePassenger(Passenger* passenger);

    // Метод для вывода информации об автомобиле и его пассажирах
    void displayInfo() const;
};

#endif // CAR_HPP


