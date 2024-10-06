#ifndef PASSENGER_HPP
#define PASSENGER_HPP

#include <string>
using namespace std;

class Passenger {
private:
    string name; // Имя пассажира

public:
    // Конструктор
    Passenger(string passengerName);

    // Метод для получения имени пассажира
    string getName() const;
};

#endif // PASSENGER_HPP


