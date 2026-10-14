#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "Book.h"

using namespace std;

class Library
{
private:
    vector<Book> books;

public:
    // Constructor
    Library();

    // Book Management
    void addBook();
    void removeBook();
    void searchBook() const;
    void displayBooks() const;

    // Borrowing
    void borrowBook();
    void returnBook();

    // File Handling
    void loadBooks(const string& filename);
    void saveBooks(const string& filename) const;
};

#endif