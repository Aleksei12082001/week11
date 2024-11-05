#ifndef TEMPERATURE_CALCULATE_HPP
#define TEMPERATURE_CALCULATE_HPP

#include <exception>
#include <string>

// Структура для хранения данных о датчиках
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

class InvalidFormatException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Ошибка: Неверный формат данных.";
    }
};

// Функции
void calculateTemperatures(const std::string& input, SensorData sensors[], int& sensorCount, bool& hasErrors);
void sortSensors(SensorData sensors[], int sensorCount, bool sortById);

#endif // TEMPERATURE_CALCULATE_HPP


