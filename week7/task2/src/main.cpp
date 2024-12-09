#include <iostream>
#include <set>
#include <ctime>
#include <numeric>
#include <algorithm>
#include <vector> // Добавлено для использования std::vector
#include "../include/product.h"
#include "../include/customer.h"
#include "../include/order.h"  
#include "../include/goods.h"  

using namespace std;

int main() {
    Customer customer(1, "CustomerName", 1);

    set<Product> products1 = {
        Product(1, "Конфеты", "Сладости", 10.0),
        Product(2, "Шоколад", "Сладости", 20.0),
        Product(3, "Пряники", "Сладости", 25.0)
    };

    set<Product> products2 = {
        Product(4, "Хлеб", "Выпечка", 6.0),
        Product(5, "Булка с сыром", "Выпечка", 8.0),
        Product(6, "Вода", "Напитки", 5.0)
    };

    vector<Order> orders = {
        Order(1, time_t(1581811200), time_t(1581897600), "completed", customer, products1), // 2020-02-16
        Order(2, time_t(1586889600), time_t(1586976000), "completed", customer, products2), // 2020-04-15
        Order(3, time_t(1584144000), time_t(1584230400), "completed", customer, products2), // 2020-03-14
        Order(4, time_t(1581638400), time_t(1581724800), "completed", customer, products2)  // 2020-02-14
    };

    // Суммируем цены продуктов только для заказов в феврале 2020 года
    double sum = accumulate(orders.begin(), orders.end(), 0.0, [](double total, const Order& order) {
        time_t orderTime = order.getOrderDate(); 
        tm* orderDate = localtime(&orderTime);

        // Проверяем, если год 2020 и месяц 2 (февраль)
        if (orderDate->tm_year == 2020 - 1900 && orderDate->tm_mon == 1) {
            double orderSum = accumulate(order.getProducts().begin(), order.getProducts().end(), 0.0,
                [](double subtotal, const Product& product) {
                    return subtotal + product.getPrice();
                });
            return total + orderSum;
        }
        return total;
    });

    cout << "Сумма цен продуктов в заказах февраля 2020 года: " << sum << endl;

    return 0;
}

