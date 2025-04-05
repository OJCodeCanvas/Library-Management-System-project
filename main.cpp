#include "Book.h"
#include "Member.h"
#include "Librarian.h"
#include "LibraryManager.h"

int main() {
    try {
        Book book1("C++ Programming", "Bjarne Stroustrup", true);
        Book book2("Effective C++", "Scott Meyers", true);

        LibraryManager libraryManager;
        libraryManager.addBook(book1);
        libraryManager.addBook(book2);

        libraryManager.listBooks();

        Member member1("Olive");
        Librarian librarian1("Bandito");

        member1.borrowBook(book1);
        member1.returnBook(book1);
        librarian1.addBook(book2);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
