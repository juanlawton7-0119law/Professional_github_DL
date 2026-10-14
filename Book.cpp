#include "Book.h"
// Defult cuntrutor
Book::Book()
{
    id = 0;
    title = "";
    author = "";
    genre = "";
    year = 0;
    available = true;
}

Book::Book(int id, string title, string author,string genre, int year, bool available){
    setId(id);
    setTitle(title);
    setAuthor(author);
    setGenre(genre);
    setYear(year);
    setAvailability(available);
}
// Getters
int Book::getId() const{
    return id;
}

string Book::getTitle() const{
    return title;
}

string Book::getAuthor() const{
    return author;
}

string Book::getGenre() const{
    return genre;
}

int Book::getYear() const{
    return year;
}

bool Book::isAvailable() const{
    return available;
}
// Setters
void Book::setId(int id){
    this->id = id;
}

void Book::setTitle(string title){
    this->title = title;
}

void Book::setAuthor(string author){
    this->author = author;
}

void Book::setGenre(string genre){
    this->genre = genre;
}

void Book::setYear(int year){
    this->year = year;
}

void Book::setAvailability(bool available){
    this->available = available;
}
// Book Opertaions
void Book::borrowBook(){
    available = false;
}

void Book::returnBook(){
    available = true;
}
// Display
void Book::display()const{
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
}

