#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H

#include <vector>
#include <algorithm>
#include <iostream>
#include "Book.h"
#include "Member.h"
#include "Librarian.h"

class LibraryManager {
public:
    LibraryManager() = default;

    void addBook(Book& book) {
        books_.push_back(book);
    }

    void listBooks() const {
        for (const auto& book : books_) {
            std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << std::endl;
        }
    }

private:
    std::vector<Book> books_;
};

#endif
