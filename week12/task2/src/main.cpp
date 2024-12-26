#include "../include/password.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cerr << "Использование: " << argv[0] << " <target_hash> <length>" << endl;
        return 1;
    }

    string targetHash = argv[1];
    int length = stoi(argv[2]);

    bruteForce(targetHash, length);

    return 0;
}





