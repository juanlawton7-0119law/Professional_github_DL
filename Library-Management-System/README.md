# Library Management System (C++)

## Project Goal

The goal of this project is to build a console-based Library Management System using C++. This project is designed to strengthen my understanding of object-oriented programming, file handling, vectors, functions, and working with multiple source files.

I will build this project myself and only seek help if I become stuck or need concepts explained.

---

# Project Structure

```
LibraryManagement/
│
├── main.cpp
├── Book.h
├── Book.cpp
├── Library.h
├── Library.cpp
├── books.txt
└── README.md
```

---

# Features to Implement

## 1. Main Menu

Create a menu that repeatedly asks the user what they would like to do.

```
=========================
 Library Management System
=========================

1. Add Book
2. Remove Book
3. Search Book
4. Display All Books
5. Borrow Book
6. Return Book
7. Exit

Choose an option:
```

The menu should continue running until the user chooses Exit.

---

## 2. Book Class

Each book should contain:

* Book ID
* Title
* Author
* Genre
* Publication Year
* Availability (Available/Borrowed)

The Book class should be responsible for storing and displaying information about a single book.

---

## 3. Library Class

The Library class manages every book in the system.

Responsibilities include:

* Adding books
* Removing books
* Searching for books
* Displaying all books
* Borrowing books
* Returning books
* Loading books from a file
* Saving books to a file

---

## 4. Add Book

Ask the user for:

* ID
* Title
* Author
* Genre
* Year

Create a Book object and add it to the vector.

Save the updated list to the file.

---

## 5. Remove Book

Ask the user for a Book ID.

If the book exists:

* Remove it from the vector.
* Save the file.

If it does not exist:

Display an appropriate error message.

---

## 6. Search Book

Allow searching by:

* Book ID
* Title
* Author

Display all matching books.

If no books are found, notify the user.

---

## 7. Display All Books

Display every book currently stored.

For each book, show:

* ID
* Title
* Author
* Genre
* Year
* Status (Available or Borrowed)

If there are no books, display a message saying the library is empty.

---

## 8. Borrow Book

Ask for a Book ID.

If the book exists and is available:

* Mark it as borrowed.
* Save the file.

Otherwise, explain why it cannot be borrowed.

---

## 9. Return Book

Ask for a Book ID.

If the book is currently borrowed:

* Mark it as available.
* Save the file.

Otherwise, display an appropriate message.

---

## 10. File Handling

Create a file named:

```
books.txt
```

Store books in the following format:

```
1001|The Hobbit|J.R.R. Tolkien|Fantasy|1937|1
1002|Dune|Frank Herbert|Science Fiction|1965|0
```

Where:

* 1 = Available
* 0 = Borrowed

When the program starts:

* Load all books from the file.

Whenever a change is made:

* Save all books back to the file.

---

# Programming Goals

By the end of this project I should be comfortable with:

* Classes and Objects
* Constructors
* Getters and Setters
* Encapsulation
* Vectors
* Loops
* Functions
* Searching
* File Input/Output
* Working with multiple source files
* Menu-driven applications

---

# Development Order

Complete the project in this order:

1. Finish Book.cpp
2. Finish Library.cpp
3. Create the menu in main.cpp
4. Test Add Book
5. Test Display Books
6. Test Remove Book
7. Test Search
8. Test Borrow
9. Test Return
10. Add file loading and saving
11. Test everything thoroughly

---

# Rules

* Build each feature before moving to the next.
* Compile and test after every major change.
* Fix bugs as they appear instead of letting them pile up.
* Keep the code clean and readable.
* Commit progress to Git after completing each major feature.

---

# Stretch Goals (Optional)

If the basic system is complete, consider adding:

* Sort books by title
* Sort books by author
* Sort books by year
* Search by genre
* Borrowing history
* Due dates
* Late fees
* Member accounts
* Librarian login
* Colored console output
* Statistics (total books, borrowed books, available books)

---

# Definition of Done

The project is complete when:

* Every menu option works correctly.
* Books are saved between program runs.
* Invalid input is handled gracefully.
* The program compiles without errors or warnings.
* The code is organized across multiple files.
* The project is ready to upload to GitHub with this README.
