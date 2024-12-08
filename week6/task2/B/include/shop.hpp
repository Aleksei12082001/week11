#include <string>
#include <map>


void addSale(std::map<std::string, std::map<std::string, int>>& sales_database,
             const std::string& customer, const std::string& product, int quantity);


void printSales(const std::map<std::string, std::map<std::string, int>>& sales_database);


