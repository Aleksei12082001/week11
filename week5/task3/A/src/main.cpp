#include <iostream>
#include <string>
#include <iomanip>
#include "calculator.hpp"

using namespace std;

int main() {
    string input;
    cout << "Введите пакет показаний с датчиков: ";
    getline(cin, input);

    SensorData sensors[256]; // Массив для хранения данных о датчиках
    int sensorCount = 0;

    try {
        // Рассчитываем температуры
        calculateTemperatures(input, sensors, sensorCount);

        // Запрашиваем, по какому полю сортировать
        int choice;
        cout << "Выберите поле для сортировки:\n1. По ID датчика\n2. По температуре\nВаш выбор: ";
        cin >> choice;

        bool sortById = (choice == 1);

        // Сортируем датчики
        sortSensors(sensors, sensorCount, sortById);

        // Выводим результаты
        cout << fixed << setprecision(1);
        for (int i = 0; i < sensorCount; ++i) {
            cout << sensors[i].id << " " << sensors[i].temperature << endl; // Выводим последнее значение температуры
        }

    } catch (const TemperatureException& e) {
        cerr << e.what() << endl;
    }

    return 0;
}



