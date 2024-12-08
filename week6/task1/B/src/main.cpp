#include <iostream>
#include <sstream>
#include "maxprofit.hpp"

using namespace std;

int main() {
    const int MAX_DAYS = 100; 
    int prices[MAX_DAYS];
    int size = 0;
    string input;

    cout << "Введите цены акций (разделяйте запятыми, введите -1 для завершения ввода): ";
    getline(cin, input); 

    stringstream ss(input);
    string priceStr;

    while (getline(ss, priceStr, ',')) { 
        int price = stoi(priceStr); 
        if (price == -1) break; 
        if (size < MAX_DAYS) {
            prices[size++] = price; 
        }
    }

    int profit = maxProfit(prices, size);
    cout << "Максимальная прибыль: " << profit << endl;

    return 0;
}






