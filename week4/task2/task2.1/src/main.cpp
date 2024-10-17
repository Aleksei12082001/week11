#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool isValidEmail(const string& email) {
    const regex pattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return regex_match(email, pattern);
}

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
