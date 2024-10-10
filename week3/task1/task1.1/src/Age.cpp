#include <iostream>
#include "Age.hpp"

using namespace std;

void Age(int age) {  
    if (age % 10 == 1 && age % 100 != 11) {
        cout << age << " год" << endl;
    } else if ((age % 10 >= 2 && age % 10 <= 4) && (age % 100 < 10 || age % 100 >= 20)) {
        cout << age << " года" << endl;
    } else {
        cout << age << " лет" << endl;
    }
}

