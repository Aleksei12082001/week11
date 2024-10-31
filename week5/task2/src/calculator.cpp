#include "calculator.hpp"
#include <cstdlib> // для std::stoi и std::stof
#include <iomanip> // для std::fixed и std::setprecision

using namespace std;

void showMenu() {
    cout << "Выберите тип, в который хотите преобразовать строку:\n";
    cout << "1. Целое число (int)\n";
    cout << "2. Число с плавающей точкой (float)\n";
    cout << "3. Символ (char)\n";
    cout << "4. Строка (std::string)\n";
    cout << "Введите номер варианта: ";
}

void convertInput(const string& input, int choice) {
    switch (choice) {
        case 1: { // int
            try {
                int num = stoi(input);
                cout << "Преобразованное значение (int): " << num << endl;
            } catch (invalid_argument&) {
                cout << "Ошибка: Невозможно преобразовать в int." << endl;
            } catch (out_of_range&) {
                cout << "Ошибка: Значение выходит за пределы int." << endl;
            }
            break;
        }
        case 2: { // float
            try {
                float fnum = stof(input);
                cout << fixed << setprecision(1); // Устанавливаем фиксированный формат и 1 знак после запятой
                cout << "Преобразованное значение (float): " << fnum << endl;
            } catch (invalid_argument&) {
                cout << "Ошибка: Невозможно преобразовать в float." << endl;
            } catch (out_of_range&) {
                cout << "Ошибка: Значение выходит за пределы float." << endl;
            }
            break;
        }
        case 3: { // char
            if (input.length() == 1) {
                char ch = input[0];
                cout << "Преобразованное значение (char): " << ch << endl;
            } else {
                cout << "Ошибка: Невозможно преобразовать в char, строка должна содержать только один символ." << endl;
            }
            break;
        }
        case 4: { // std::string
            cout << "Преобразованное значение (std::string): " << input << endl;
            break;
        }
        default:
            cout << "Ошибка: Неверный выбор." << endl;
    }
}


