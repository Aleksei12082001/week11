#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <exception>
#include <string>

struct SensorData {
    int id;
    double temperature;
};

// Исключения
class EmptyInputException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Ошибка: Введена пустая строка или строка состоит только из пробелов.";
    }
};

class LengthExceededException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Ошибка: Вышел за пределы максимальной длины строки.";
    }
};

// Функции
void calculateTemperatures(const std::string& input, SensorData sensors[], int& sensorCount, bool& hasErrors);
void sortSensors(SensorData sensors[], int sensorCount, bool sortById);

#endif // CALCULATOR_HPP


