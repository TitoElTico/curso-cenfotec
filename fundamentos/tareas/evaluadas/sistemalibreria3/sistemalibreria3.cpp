#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <memory>

#include "library.h"
#include "book.h"

using namespace std;
using namespace library;

int main()
{
    // Create an instance of the Library class
    Library library;

    // Load the library collection from the text file
    if (!library.loadFromFile("library.csv"))
    {
        std::cout << "Error: could not load library from file." << std::endl;
    }

    // Loop to display a menu of options to the user
    int choice;
    do
    {
        // Display the menu
        std::cout << std::endl << "Menu:" << std::endl;
        std::cout << "1. Add a book" << std::endl;
        std::cout << "2. Remove a book" << std::endl;
        std::cout << "3. View all books" << std::endl;
        std::cout << "4. Quit" << std::endl;

        // Get the user's choice
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Perform the chosen action
        switch (choice)
        {
        case 1:
        {
            // Add a new book to the library
            Book book = inputBook();
            library.addBook(book);
            std::cout << "Book added to library." << std::endl;
            break;
        }
        case 2:
        {
            // Remove a book from the library
            std::string isbn;
            std::cout << "Enter the ISBN of the book to remove: ";
            std::cin >> isbn;
            if (library.removeBook(isbn))
            {
                std::cout << "Book removed from library." << std::endl;
            }
            else
            {
                std::cout << "Book not found in library." << std::endl;
            }
            break;
        }
        case 3:
        {
            // View all the books in the library
            std::cout << std::endl << "Library contents:" << std::endl;
            library.viewBooks();
            break;
        }
        case 4:
        {
            // Quit the program and save the library collection to the text file
            library.saveToFile("library.csv");
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        default:
        {
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
        }

    } while (choice != 4);

    return 0;
}
