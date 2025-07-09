/**
 * @file class_objects.cpp
 * @brief Learning the OOPs in C++
 * @author Nemo
 * @date 9th-July
 */
#include <iostream>
#include <string>

/**
 * @class Book
 * @brief A class to represent a book with title, author, and number of pages.
 */
class Book {
private:
    std::string title;  ///< Title of the book
    std::string author; ///< Author of the book
    int pages;          ///< Number of pages in the book

public:
    /**
     * @brief Default constructor
     * 
     * Initializes title and author to "Unknown" and pages to 0.
     */
    Book() : title("Unknown"), author("Unknown"), pages(0) {};
    // equivalent to
    // Book() {
    //     title = "Unknown";
    //     author = "Unknown";
    //     pages = 0;
    // }

    /**
     * @brief Parameterized constructor
     * 
     * @param t Title of the book
     * @param a Author of the book
     * @param p Number of pages
     */
    Book(std::string t, std::string a, int p) : title(t), author(a), pages(p) {
        std::cout << "Book " << t << " details entered." << std::endl << std::endl;
    };

    /**
     * @brief Print information about the book
     */
    void printInfo() const{
        std::cout << "Title : " << title << "\n"
              << "Author: " << author << "\n"
              << "Pages : " << pages << "\n\n";
    }
};



/**
 * @brief Main function to demonstrate Book class functionality
 * 
 * @return int Exit code
 */
int main() {
    Book b1;
    Book b2("The Alchemist", "Paulo Coelho", 197);

    b1.printInfo();
    b2.printInfo();

    return 0;
}
