#include "Library.h"
#include "fstream"
#include <sstream>
using namespace std;

Library::Library(){
    loadBooks("books.txt");
}

void Library::addBook(){
    int id;
    string title;
    string author;
    string genre;
    int year;
    cout << "The Book's Id? " << endl;
    cin >> id;
    cin.ignore();

    cout << "What is the name of the book? " << endl;
    getline(cin, title);

    cout << "The book's author? " << endl;
    getline(cin, author);

    cout << "The book's genre? " << endl;
    getline(cin, genre);

    cout << "The book's year? " << endl;
    cin>> year;

    Book newBook( id,  title,  author,  genre,  year, true);
    books.push_back(newBook);
    cout << "Book was Added " << endl;
    
    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();

    
}

void Library::removeBook(){
    int id;
    cout << "What's the book's Id? " << endl;
    cin >> id;
    if (books.size() == 0){
        cout << "Library is Empty" << endl;
        return;
    }
    for(int i = 0; i < books.size(); i++){

        if(books[i].getId() == id){
            cout << "Book found." << endl;
            books.erase(books.begin() + i);
            cout << "Removed Book" << endl;
            break;
        }
        else{
            cout << "Book not found." << endl;
        }
    }
    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();
}

void Library::searchBook()const{
    int choice;
    int id;
    string title;
    string author;
    if (books.size() == 0){
        cout << "Library is Empty" << endl;
        return;
    }
    cout << "Search By: " << endl;
    cout << "1. Id" << endl;
    cout << "2. Title" << endl;
    cout << "3. author" << endl;
    cout << "Make a choice" << endl;
    cin >> choice;
    

    for(int i = 0; i < books.size(); i++){

        switch(choice){

            case 1:
            cout << "What's the books Id? " << endl;
            cin >> id;
            if(books[i].getId() == id){
                cout << "Book Found : " << endl;
                books[i].display();
                break;
            }

            case 2:
            cout << "What's the Book's Title? " << endl;
            cin >> title;
            if(books[i].getTitle() == title){
                cout << "Book Found : " << endl;
                books[i].display();
                return;
            }

            case 3:
            cout << "What's the Author Name? " << endl;
            cin >> author;
            if(books[i].getAuthor() == author){
                cout << "Book Found : " << endl;
                books[i].display();
                break;
            }

            default:
            cout << "Book was Not Found" << endl;
            break;
        }

    }
    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();
}

void Library::displayBooks()const{
    if (books.size() == 0){
        cout << "Library is Empty" << endl;
        return;
    }
    for(const Book &book: books){
        cout << "==================="<< endl;
        book.display();
    }
    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();
}

void Library::borrowBook(){
    int id;
    bool found = true;
    cout << "What's the book's Id? " << endl;
    cin >> id;
    if (books.size() == 0){
        cout << "Library is Empty" << endl;
        return;
    }
    for(Book &book: books){

        if(book.getId() == id && book.isAvailable() == true){
            cout << "Book is available. " << endl;
            book.borrowBook();
            cout << "Book is borrowed." << endl;
            found = false;
            break;
        }
        else if(book.getId() == id && book.isAvailable() == false){
            cout << "Book Not available" << endl;
            found = false;
            break;
        }
    }
    if(found){
        cout << "Book was Not found in Library. " << endl;
    }
    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();
}

void Library::returnBook(){
    int id;
    bool found = false;
    cout << "What's the book's Id? " << endl;
    cin >> id;
    if (books.size() == 0){
        cout << "Library is Empty" << endl;
        return;
    }
    for(Book &book: books){

        if(book.getId() == id && !book.isAvailable()){
            cout << "Book is Found. " << endl;
            book.returnBook();
            cout << "Book is Returned." << endl;
            found = true;
            break;
        }
        else if(book.getId() == id && book.isAvailable()){
            cout << "Book is Not Available" << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Book was Not found in Library " << endl;
    }  
    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();
}

void Library::loadBooks(const string& filename){
    cout << "Loading File:" << endl;
    ifstream inFile(filename);
    if (!inFile.is_open()){
        cout << "Error opening file or there is no file." << endl;
        return;
    }
    string line;

    while(getline(inFile, line)){
        stringstream ss(line);
        
        string idStr;
        string title;
        string author;
        string genre;
        string yearStr;
        string availableStr;

        getline(ss, idStr, ',');
        getline(ss, title, ',');
        getline(ss, author, ',');
        getline(ss, genre, ',');
        getline(ss, yearStr, ',');
        getline(ss, availableStr, ',');

        int id = stoi(idStr);
        int year = stoi(yearStr);
        bool available = (availableStr == "1");

        Book newBook(id, title, author, genre, year, available);
        books.push_back(newBook);
    }
    inFile.close();
}

void Library::saveBooks(const string& filename)const{
    cout << "Saving File: " << endl;
    ofstream outFile(filename);

    for(int i = 0; i < books.size(); i++){
        outFile << books[i].getId() << ',' << books[i].getTitle() << ',' << books[i].getAuthor() << ',' << books[i].getGenre() 
        << ',' << books[i].getYear() << ',' << books[i].isAvailable() << endl;
    }
    outFile.close();
}




