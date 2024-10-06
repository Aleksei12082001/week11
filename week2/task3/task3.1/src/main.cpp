#include "Author.hpp"
#include "Book.hpp"
#include <iostream>
using namespace std;

int main() {
    Author author1("Толстой", 1828);
    Book book1("Война и мир", author1);

    book1.displayInfo();

    return 0;
}
