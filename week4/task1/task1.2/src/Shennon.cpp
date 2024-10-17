#include "Shannon.hpp"
#include <cmath>
#include <iostream>

double calculateShannonEntropy(const std::string& input) {
    int frequency[256] = {0}; // Массив для хранения частоты символов
    int totalChars = 0;

    // Подсчет частоты каждого символа
    for (char c : input) {
        if (isprint(c)) { // Учитываем только печатные символы
            frequency[(unsigned char)c]++;
            totalChars++;
        }
    }

    // Вычисление энтропии
    double entropy = 0.0;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) { // Если символ встречается
            double probability = static_cast<double>(frequency[i]) / totalChars;
            entropy -= probability * log2(probability);
        }
    }

    return entropy;
}

