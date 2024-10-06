#include "Author.hpp"

// Конструктор
Author::Author(string authorName, int yearOfBirth) : name(authorName), birthYear(yearOfBirth) {}

// Методы для установки и получения информации об авторе
void Author::setName(string newName) { name = newName; }
string Author::getName() const { return name; }
void Author::setBirthYear(int newBirthYear) { birthYear = newBirthYear; }
int Author::getBirthYear() const { return birthYear; }


