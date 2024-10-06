#include <iostream>
#include "Human.hpp"

using namespace std;

int main() {
    // Создание первого экземпляра класса Human
    Human firstHuman;
    firstHuman.SetAge(18);
    firstHuman.name = "Aleksei";
    firstHuman.surname = "Arapov";
    firstHuman.SetHeight(185);
    firstHuman.SetWeight(85);
    firstHuman.Print(); // Выводим все данные о первом человеке

    // Создание второго экземпляра класса Human
    Human secondHuman;
    secondHuman.SetAge(22);
    secondHuman.name = "Ivan";
    secondHuman.surname = "Ivanov";
    secondHuman.SetHeight(170);
    secondHuman.SetWeight(75);
    secondHuman.Print(); // Выводим все данные о втором человеке

    // Создание третьего экземпляра класса Human
    Human thirdHuman;
    thirdHuman.SetAge(19);
    thirdHuman.name = "Petr";
    thirdHuman.surname = "Petrov";
    thirdHuman.SetHeight(165);
    thirdHuman.SetWeight(65);
    thirdHuman.Print(); // Выводим все данные о третьем человеке

    return 0;
}


