#pragma once

#include <string>

namespace library {

    class Book {
    private:
        std::string title;
        std::string author;
        std::string isbn;
    public:
        Book(const std::string& title = "", const std::string& author = "", const std::string& isbn = "");
        std::string getTitle() const;
        void setTitle(const std::string& title);
        std::string getAuthor() const;
        void setAuthor(const std::string& author);
        std::string getISBN() const;
        void setISBN(const std::string& isbn);
        std::string toString() const;
    };

}
