#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
using namespace std;
class Human {
public:
    string name; // атрибуты класса
    string surname;
    int height;
    int weight;

private:
    int age;

public:
    // Конструктор по умолчанию
    Human();

    // Методы для установки значений (сеттеры)
    void SetHeight(int valueheight);
    void SetWeight(int valueweight);
    void SetAge(int valueage);

    // Методы для получения значений (геттеры)
    int GetHeight() const;
    int GetWeight() const;
    int GetAge() const;

    void Print() const;
};

#endif // HUMAN_HPP

