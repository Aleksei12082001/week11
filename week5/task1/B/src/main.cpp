#include <iostream>
#include <fstream>
#include <string>
#include "shannon_entropy.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    // Check the number of command line arguments
    if (argc != 2) {
        cerr << "Error: Please specify the filename as an argument." << endl;
        return 1;
    }

    string filename = argv[1]; // Filename from command line arguments
    ifstream file(filename, ios::binary); // Open the file for reading in binary mode

    // Check if the file opened successfully
    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    int frequency[256] = {0}; // Array for ASCII character frequency
    int totalChars = 0;
    const size_t BUFFER_SIZE = 4096; // Buffer size for reading

    // Read the file in chunks
    char buffer[BUFFER_SIZE];
    while (file.read(buffer, BUFFER_SIZE) || file.gcount() > 0) {
        size_t bytesRead = file.gcount();
        for (size_t i = 0; i < bytesRead; i++) {
            frequency[(unsigned char)buffer[i]]++;
            totalChars++;
        }
    }

    // Check for characters in the file
    if (totalChars == 0) {
        cerr << "Error: The file is empty." << endl;
        return 1;
    }

    file.close(); // Close the file after reading

    // Calculate and output the entropy
    double entropy = calculateShannonEntropy(frequency, totalChars);
    cout << "Shannon entropy: " << entropy << endl;

    return 0; // Successful program termination
}




