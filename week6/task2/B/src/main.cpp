#include "../include/shop.hpp"
#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int N;
    cout << "Введите количество строк данных о продажах: ";
    cin >> N;
    cin.ignore();  
    
    map<string, map<string, int>> sales_database;

    cout << "Введите строки данных о продажах: ";  
    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);

        
        stringstream ss(line);
        string customer, product;
        int quantity;
        
        ss >> customer >> product >> quantity;

       
        addSale(sales_database, customer, product, quantity);
    }

 
    printSales(sales_database);

    return 0;
}




