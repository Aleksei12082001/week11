#include <iostream>
#include <sstream>
#include <cstring>
#include "container.hpp"

int main() {
    const int MAX_SIZE = 100; 
    int heights[MAX_SIZE];
    int size = 0;

    std::string input;
    std::cout << "Введите высоты линий (разделяйте запятыми): ";
    getline(std::cin, input);

    std::stringstream ss(input);
    std::string number;

    while (getline(ss, number, ',') && size < MAX_SIZE) {
        heights[size++] = std::stoi(number);
    }

    Container container(heights, size);
    int result = container.maxArea();
    std::cout << "Максимальный объем воды: " << result << std::endl;

    return 0;
}






