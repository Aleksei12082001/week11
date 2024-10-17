#include <iostream>
#include <string>
#include "IPv6Validator.hpp"

using namespace std;

int main() {
    string ip;

    cout << "Введите адрес IPv6 в полной форме: ";
    getline(cin, ip); // Читаем строку с пробелами

    if (isValidIPv6(ip)) {
        cout << "Адрес IPv6 корректен." << endl;
    } else {
        cout << "Адрес IPv6 некорректен." << endl;
    }

    return 0;
}
