#include "calculator.hpp"

using namespace std;

int main() {
    string input;
    cout << "Введите сообщение для преобразования: ";
    getline(cin, input);

    showMenu();
    int choice;
    cin >> choice;

    convertInput(input, choice);

    return 0;
}


