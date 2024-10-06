#include "Car.hpp"

// Реализация методов класса Car
Car::Car(string carModel, Power carPower) 
    : model(carModel), power(carPower), passenger1(nullptr), passenger2(nullptr) {}

void Car::addPassenger(Passenger* passenger) {
    if (passenger1 == nullptr) {
        passenger1 = passenger;
    } else if (passenger2 == nullptr) {
        passenger2 = passenger;
    } else {
        cout << "В автомобиле уже два пассажира." << endl;
    }
}

void Car::removePassenger(Passenger* passenger) {
    if (passenger1 == passenger) {
        passenger1 = nullptr;
    } else if (passenger2 == passenger) {
        passenger2 = nullptr;
    }
}

void Car::displayInfo() const {
    cout << "Модель автомобиля: " << model << endl;
    cout << "Мощность двигателя: " << power.getPower() << endl;
    cout << "Пассажиры: " << endl;
    if (passenger1 != nullptr) {
        cout << "   - " << passenger1->getName() << endl;
    }
    if (passenger2 != nullptr) {
        cout << "   - " << passenger2->getName() << endl;
    }
}

