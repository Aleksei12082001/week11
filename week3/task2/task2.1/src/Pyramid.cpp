#include <iostream>
#include "Pyramid.hpp"

using namespace std;

void pyramid(int height) {  // Изменено на pyramid
    int level = 1; 

    while (level <= height) {
        int spaces = height - level;
        int stars = 2 * level - 1;

        // Печать пробелов
        for (int space_count = 0; space_count < spaces; space_count++) {
            cout << " ";
        }

        // Печать звезд
        for (int star_count = 0; star_count < stars; star_count++) {
            cout << "*";
        }

        cout << endl;
        level++;
    }
}

