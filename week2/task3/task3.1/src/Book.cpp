#include "Book.hpp"
#include <iostream>
using namespace std;

// Конструктор
Book::Book(string bookTitle, Author bookAuthor) : title(bookTitle), author(bookAuthor) {}

// Методы для установки и получения информации об авторе книги
void Book::setAuthor(Author newAuthor) { author = newAuthor; }
Author Book::getAuthor() const { return author; }
void Book::setTitle(string newTitle) { title = newTitle; }
string Book::getTitle() const { return title; }

// Метод для вывода информации о книге
void Book::displayInfo() const {
    cout << "Название книги: " << title << endl;
    cout << "Автор: " << author.getName() << ", год рождения: " << author.getBirthYear() << endl;
}

