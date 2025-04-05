#ifndef MEMBER_H
#define MEMBER_H

#include "Person.h"
#include "Book.h"

class Member : public Person {
public:
    Member(std::string name) : Person(std::move(name)) {}

    void borrowBook(Book& book) {
        if (book.isAvailable()) {
            book.borrow();
            std::cout << getName() << " borrowed " << book.getTitle() << std::endl;
        } else {
            throw std::runtime_error("Book is already borrowed.");
        }
    }

    void returnBook(Book& book) {
        book.returnBook();
        std::cout << getName() << " returned " << book.getTitle() << std::endl;
    }

    void printRole() const override { std::cout << getName() << " is a Member." << std::endl; }
};

#endif
