#ifndef BOOK_HPP
#define BOOK_HPP

#include "Author.hpp"
#include <string>
using namespace std;

class Book {
private:
    string title;  // Переместите title перед author
    Author author;

public:
    // Конструктор
    Book(string bookTitle, Author bookAuthor);

    // Методы для установки и получения информации об авторе книги
    void setAuthor(Author newAuthor);
    Author getAuthor() const;
    void setTitle(string newTitle);
    string getTitle() const;

    // Метод для вывода информации о книге
    void displayInfo() const;
};

#endif // BOOK_HPP

