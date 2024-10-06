#include "../include/BackAccount.hpp"

// Конструктор
BankAccount::BankAccount(string accNumber) : accountNumber(accNumber), balance(0) {}

// Метод для пополнения счета
void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "Сумма " << amount << " успешно добавлена на счет " << accountNumber << "." << endl;
}

// Метод для снятия средств со счета
void BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Сумма " << amount << " успешно снята со счета " << accountNumber << "." << endl;
    } else {
        cout << "Недостаточно средств на счете." << endl;
    }
}

// Метод для получения текущего баланса
double BankAccount::getBalance() const {
    return balance;
}

// Метод для получения номера счета
string BankAccount::getAccountNumber() const {
    return accountNumber;
}
