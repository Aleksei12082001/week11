#include <iostream>
#include "email.hpp"

using namespace std;

int main() {
    string email;
    int attempts = 0;
    const int maxAttempts = 5; // Максимальное количество попыток

    while(attempts < maxAttempts){
        cout << "Введите адрес электронной почты: ";
        cin >> email;

        if (isValidEmail(email)) {
            cout << "Адрес электронной почты корректен." << endl;
            break;
        } else {
            cout << "Адрес электронной почты некорректен." << endl;
            attempts++;
        }
    }

    if (attempts == maxAttempts) {
        cout << "Превышено максимальное количество попыток." << endl;
    }

    return 0;
}

