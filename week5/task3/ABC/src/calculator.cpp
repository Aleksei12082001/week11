#include "calculator.hpp"
#include <sstream>
#include <algorithm>
#include <iostream>
#include <cctype>

using namespace std;

// Функция для проверки, является ли строка пустой или состоит только из пробелов
bool isEmptyOrWhitespace(const string& str) {
    return str.empty() || all_of(str.begin(), str.end(), ::isspace);
}

// Функция для расчета температур
void calculateTemperatures(const string& input, SensorData sensors[], int& sensorCount) {
    if (isEmptyOrWhitespace(input)) {
        throw TemperatureException("Ошибка: Введена пустая строка или строка состоит только из пробелов.");
    }

    if (input.length() > 256) {
        throw TemperatureException("Ошибка: Вышел за пределы максимальной длины строки.");
    }

    stringstream ss(input);
    string token;

    while (getline(ss, token, '@')) {
        if (token.length() < 4) {
            throw TemperatureException("Ошибка: Неверный формат данных.");
        }

        int id = stoi(token.substr(0, 2));
        double temperature = stod(token.substr(2));

        if (temperature > 50 || temperature < -50) {
            throw TemperatureException("Ошибка: Значение температуры вышло за пределы диапазона.");
        }

        // Ищем, есть ли уже датчик с таким id
        bool found = false;
        for (int i = 0; i < sensorCount; ++i) {
            if (sensors[i].id == id) {
                sensors[i].temperature = temperature; // Сохраняем последнее значение температуры
                found = true;
                break;
            }
        }

        // Если датчик не найден, добавляем новый
        if (!found) {
            sensors[sensorCount].id = id;
            sensors[sensorCount].temperature = temperature;
            sensorCount++;
        }
    }
}

// Функция для сортировки датчиков
void sortSensors(SensorData sensors[], int sensorCount, bool sortById) {
    if (sortById) {
        sort(sensors, sensors + sensorCount, [](const SensorData& a, const SensorData& b) {
            return a.id < b.id;
        });
    } else {
        sort(sensors, sensors + sensorCount, [](const SensorData& a, const SensorData& b) {
            return a.temperature < b.temperature;
        });
    }
}



