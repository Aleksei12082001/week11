#include "shannon.hpp"
#include <cmath> 
#include <iostream> 

double calculateShannonEntropy(const std::string& input) {
    int frequency[256] = {0}; 
    int totalChars = 0;

    
    for (char c : input) {
        frequency[(unsigned char)c]++;
        totalChars++;
    }

    // Вычисление энтропии
    double entropy = 0.0;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) { 
            double probability = frequency[i] * 1.0 / totalChars; 
            entropy -= probability * log2(probability);
        }
    }

    return entropy;
}


