#include <iostream>
#include <cmath>
#include "shannon_entropy.hpp"

using namespace std;

// Function to calculate Shannon entropy
double calculateShannonEntropy(int frequency[], int totalChars) {
    double entropy = 0.0;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            double probability = static_cast<double>(frequency[i]) / totalChars;
            entropy -= probability * log2(probability);
        }
    }

    return entropy;
}

