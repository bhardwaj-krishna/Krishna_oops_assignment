// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

// Base class
class Book {
protected:
    string bookTitle, bookAuthor;
    float bookPrice;

public:
    void setBook(string title, string author, float price) {
        bookTitle = title;
        bookAuthor = author;
        bookPrice = price;
    }
    
    void displayBook() {
        cout << "Title: " << bookTitle << endl;
        cout << "Author: " << bookAuthor << endl;
        cout << "Price: " << bookPrice << endl;
    }
};

// Derived class
class Textbook : public Book {
    string courseSubject;

public:
    void setTextbook(string title, string author, float price, string subject) {
        setBook(title, author, price);
        courseSubject = subject;
    }
    
    void displayTextbook() {
        displayBook(); 
        cout << "Subject: " << courseSubject << endl;
    }
};

int main() {
    Book genericBook;
    Textbook textBookObj;
    
    cout << "Book Details\n";
    genericBook.setBook("C++ Basics", "Bjarne", 500);
    genericBook.displayBook();

    cout << "\nTextbook Details\n";
    textBookObj.setTextbook("The Man from An Egg", "Sudha Murty", 450, "Story");
    textBookObj.displayTextbook();

    return 0;
}