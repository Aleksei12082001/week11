#include "Power.hpp"

// Реализация методов класса Power
Power::Power(int enginePower) : power(enginePower) {}

int Power::getPower() const {
    return power;
}


