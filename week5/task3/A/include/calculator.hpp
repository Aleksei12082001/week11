#ifndef TEMPERATURE_CALCULATE_HPP
#define TEMPERATURE_CALCULATE_HPP

#include <string>
#include <stdexcept>

// Исключение для ошибок температуры
class TemperatureException : public std::runtime_error {
public:
    explicit TemperatureException(const std::string& message)
        : std::runtime_error(message) {}
};

struct SensorData {
    int id;
    double temperature; // Сохраним последнее значение температуры
};

void calculateTemperatures(const std::string& input, SensorData sensors[], int& sensorCount);
void sortSensors(SensorData sensors[], int sensorCount, bool sortById);

#endif // TEMPERATURE_CALCULATE_HPP


