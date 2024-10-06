#ifndef Z2_2_HPP
#define Z2_2_HPP

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber; 
    double balance;

public:
    // Конструктор
    BankAccount(string accNumber);

    // Метод для пополнения счета
    void deposit(double amount);

    // Метод для снятия средств со счета
    void withdraw(double amount);

    // Метод для получения текущего баланса
    double getBalance() const;

    // Метод для получения номера счета
    string getAccountNumber() const;
};

#endif // Z2_2_HPP

