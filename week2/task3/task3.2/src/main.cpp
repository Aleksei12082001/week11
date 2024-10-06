#include "Power.hpp"
#include "Passenger.hpp"
#include "Car.hpp"

int main() {
    Power power1(200); // Двигатель мощностью 200 л.с.
    Car car1("Mercedes", power1); // Создание автомобиля

    Passenger* passenger1 = new Passenger("Алексей");
    Passenger* passenger2 = new Passenger("Кристина");

    car1.addPassenger(passenger1);
    car1.addPassenger(passenger2);

    car1.displayInfo();

    car1.removePassenger(passenger2);

    car1.displayInfo();

    delete passenger1;
    delete passenger2;

    return 0;
}

