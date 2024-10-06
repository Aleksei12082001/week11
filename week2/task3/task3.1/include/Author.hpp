#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include <string>
using namespace std;

class Author {
private:
    string name;
    int birthYear;

public:
    // Конструктор
    Author(string authorName, int yearOfBirth);

    // Методы для установки и получения информации об авторе
    void setName(string newName);
    string getName() const;
    void setBirthYear(int newBirthYear);
    int getBirthYear() const;
};

#endif // AUTHOR_HPP

