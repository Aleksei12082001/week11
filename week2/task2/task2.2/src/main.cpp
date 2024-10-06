#include "../include/BackAccount.hpp"

int main() {
    string accNumber;
    double initialBalance, withdrawAmount;

    cout << "Введите номер счета: ";
    cin >> accNumber;

    cout << "Введите начальный баланс: ";
    cin >> initialBalance;

    BankAccount account(accNumber);
    account.deposit(initialBalance); // Вносим начальную сумму на счет

    cout << "Счет " << account.getAccountNumber() << ": " << account.getBalance() << endl;

    cout << "Введите сумму для снятия: ";
    cin >> withdrawAmount;

    account.withdraw(withdrawAmount); 

    cout << "Счет " << account.getAccountNumber() << ": " << account.getBalance() << endl;

    return 0;
}
