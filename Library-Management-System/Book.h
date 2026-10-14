#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    int id;
    string title;
    string author;
    string genre;
    int year;
    bool available;

public:
    // Constructors
    Book();
    Book(int id, string title, string author, string genre, int year, bool available);

    // Getters
    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    string getGenre() const;
    int getYear() const;
    bool isAvailable() const;

    // Setters
    void setId(int id);
    void setTitle(string title);
    void setAuthor(string author);
    void setGenre(string genre);
    void setYear(int year);
    void setAvailability(bool available);

    // Book Operations
    void borrowBook();
    void returnBook();

    // Display
    void display() const;
};

#endif