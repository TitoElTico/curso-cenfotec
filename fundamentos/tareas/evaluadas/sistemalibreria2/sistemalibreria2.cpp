#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
public:
    Book(string title = "", string author = "", string isbn = "") {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }
    string getTitle() const {
        return title;
    }
    void setTitle(string title) {
        this->title = title;
    }
    string getAuthor() const {
        return author;
    }
    void setAuthor(string author) {
        this->author = author;
    }
    string getISBN() const {
        return isbn;
    }
    void setISBN(string isbn) {
        this->isbn = isbn;
    }
};

class Library {
private:
    vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }
    void removeBook(int index) {
        books.erase(books.begin() + index);
    }
    vector<Book> getBooks() const {
        return books;
    }
    void saveToFile(string fileName, char separator = ',') const {
        ofstream file(fileName);
        if (file.is_open()) {
            for (const Book& book : books) {
                file << book.getTitle() << separator << book.getAuthor() << separator << book.getISBN() << endl;
            }
            file.close();
        }
        else {
            cerr << "Error: could not open file for writing." << endl;
        }
    }
    void loadFromFile(string fileName, char separator = ',') {
        ifstream file(fileName);
        if (file.is_open()) {
            books.clear();
            string line;
            while (getline(file, line)) {
                stringstream ss(line);
                string title, author, isbn;
                getline(ss, title, separator);
                getline(ss, author, separator);
                getline(ss, isbn, separator);
                Book book(title, author, isbn);
                addBook(book);
            }
            file.close();
        }
        else {
            cerr << "Error: could not open file for reading." << endl;
        }
    }
};

void displayMenu() {
    cout << "1. Add a book" << endl;
    cout << "2. Remove a book" << endl;
    cout << "3. View all books" << endl;
    cout << "4. Quit" << endl;
}

int main()
{
    Library library;
    library.loadFromFile("library.txt");

    int choice;
    do
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
            {
                string title, author, isbn;
                cout << "Enter book title: ";
                getline(cin, title);
                cout << "Enter book author: ";
                getline(cin, author);
                cout << "Enter book ISBN: ";
                getline(cin, isbn);
                Book book(title, author, isbn);
                library.addBook(book);
                break;
            }

            case 2:
            {
                int index;
                cout << "Enter index of book to remove: ";
                cin >> index;
                library.removeBook(index);
                break;
            }

            case 3:
            {
                vector<Book> books = library.getBooks();
                if (books.empty())
                {
                    cout << "No books in library." << endl;
                }

                else
                {
                    for (const Book& book : books)
                    {
                        cout << book.getTitle() << " by " << book.getAuthor() << " (ISBN: " << book.getISBN() << ")" << endl;
                    }
                }
            }
        }
    } while (choice != 4);

    return choice;
        
}