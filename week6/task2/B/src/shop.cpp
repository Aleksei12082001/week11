#include "../include/shop.hpp"
#include <iostream>
#include <map>
#include <string>


void addSale(std::map<std::string, std::map<std::string, int>>& sales_database,
             const std::string& customer, const std::string& product, int quantity) {
    
    sales_database[customer][product] += quantity;
}


void printSales(const std::map<std::string, std::map<std::string, int>>& sales_database) {
    for (const auto& customer_entry : sales_database) {
        std::cout << customer_entry.first << ":\n";  
        for (const auto& product_entry : customer_entry.second) {
            std::cout << "  " << product_entry.first << " " << product_entry.second << "\n";  
        }
    }
}
