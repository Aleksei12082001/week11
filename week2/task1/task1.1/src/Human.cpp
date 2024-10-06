#include <iostream>
#include "Human.hpp"

using namespace std;

// Конструктор по умолчанию
Human::Human() : height(0), weight(0), age(0) {}

// Методы для установки значений (сеттеры)
void Human::SetHeight(int valueheight) {
    height = valueheight;
}

void Human::SetWeight(int valueweight) {
    weight = valueweight;
}

void Human::SetAge(int valueage) {
    age = valueage;
}

// Методы для получения значений (геттеры)
int Human::GetHeight() const {
    return height;
}

int Human::GetWeight() const {
    return weight;
}

int Human::GetAge() const {
    return age;
}

void Human::Print() const {
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Age: " << age << endl;
}
