#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

#include "library.h"

namespace library {

    Library::Library(const std::string& filename) : filename(filename) {}

    bool Library::addBook(const std::string& title, const std::string& author, const std::string& isbn) {
        books.push_back(std::make_unique<Book>(title, author, isbn));
        return true;
    }

    bool Library::removeBook(int index) {
        if (index >= 0 && index < books.size()) {
            books.erase(books.begin() + index);
            return true;
        }
        return false;
    }

    void Library::viewBooks() const {
        std::cout << "Books in the library:" << std::endl;
        std::cout << std::setw(20) << "Title" << std::setw(20) << "Author" << std::setw(20) << "ISBN" << std::endl;
        for (const auto& book : books) {
            std::cout << std::setw(20) << book->getTitle() << std::setw(20) << book->getAuthor() << std::setw(20) << book->getISBN() << std::endl;
        }
    }
}