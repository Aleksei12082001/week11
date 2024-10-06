#include "Passenger.hpp"

// Реализация методов класса Passenger
Passenger::Passenger(string passengerName) : name(passengerName) {}

string Passenger::getName() const {
    return name;
}


