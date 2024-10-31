#ifndef TEMPERATURE_CALCULATE_HPP
#define TEMPERATURE_CALCULATE_HPP

#include <string>

struct SensorData {
    int id;
    double temperature; // Сохраним последнее значение температуры
};

void calculateTemperatures(const std::string& input, SensorData sensors[], int& sensorCount, bool& hasErrors);
void sortSensors(SensorData sensors[], int sensorCount, bool sortById);

#endif // TEMPERATURE_CALCULATE_HPP




