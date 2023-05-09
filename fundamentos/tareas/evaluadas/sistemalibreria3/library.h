#pragma once

#include <string>
#include <vector>
#include <memory>

#include "book.h"

namespace library {

    class Library {
    private:
        std::vector<std::unique_ptr<Book>> books;
        const std::string filename;
    public:
        Library(const std::string& filename);
        bool addBook(const std::string& title, const std::string& author, const std::string& isbn);
        bool removeBook(int index);
        void viewBooks() const;
        bool save() const;
        bool load();
    };

}
