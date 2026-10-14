#include <iostream>
#include <filesystem>
#include "Library.h"
#include "Book.h"

using namespace std;
int main() {
    // Main menu
    cout << std::filesystem::current_path() << endl;
    int choice = 0;
    Library library;
    
    while(true) {
        cout << "========================="<< endl;
        cout << "Library Management System"<< endl;
        cout << "========================="<< endl;

        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Display All Books" << endl;
        cout << "5. Borrow Book" << endl;
        cout << "6. Return Book" << endl;
        cout << "7. Exit" << endl;
        
        cout << "What's your choice? " << endl;
        cin >> choice;

        switch(choice){
            case 1:
            library.addBook();
            break;
            

            case 2:
            library.removeBook();
            break;
            

            case 3:
            library.searchBook();
            break;
            

            case 4:
            library.displayBooks();
            break;
            

            case 5:
            library.borrowBook();
            break;
            

            case 6:
            library.returnBook();
            break;
            

            case 7:
            library.saveBooks("books.txt");
            return 0;
        }
        
    }
    

}
    