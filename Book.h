#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
public:
    Book(std::string title, std::string author, bool isAvailable)
        : title_(std::move(title)), author_(std::move(author)), isAvailable_(isAvailable) {}

    std::string getTitle() const { return title_; }
    std::string getAuthor() const { return author_; }
    bool isAvailable() const { return isAvailable_; }
    void borrow() { isAvailable_ = false; }
    void returnBook() { isAvailable_ = true; }

private:
    std::string title_;
    std::string author_;
    bool isAvailable_;
};

#endif
