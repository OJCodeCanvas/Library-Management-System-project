#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "Person.h"
#include "Book.h"

class Librarian : public Person {
public:
    Librarian(std::string name) : Person(std::move(name)) {}

    void addBook(Book& book) {
        std::cout << getName() << " added " << book.getTitle() << " to the library." << std::endl;
    }

    void printRole() const override { std::cout << getName() << " is a Librarian." << std::endl; }
};

#endif
