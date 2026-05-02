// name: Krishna Bhardwaj
// roll number: 1024150316
#include<iostream>
using namespace std;

class Book {
public:
    string bookTitle, bookAuthor, bookISBN;
};

class Library {
    Book bookList[100];
    int totalBooks = 0;
public:
    bool addNewBook(string &titleParam, string &authorParam, string &isbnParam) {
        if(totalBooks >= 100) return false;

        bookList[totalBooks].bookTitle = titleParam;
        bookList[totalBooks].bookAuthor = authorParam;
        bookList[totalBooks].bookISBN = isbnParam;
        totalBooks++;
        return true;
    }

    bool removeBooks(string &isbnParam); 

    void displayDetails() {
        for(int i = 0; i < totalBooks; i++) {
            cout << bookList[i].bookTitle << " | "
                 << bookList[i].bookAuthor << " | "
                 << bookList[i].bookISBN << endl;
        }
    }
};

bool Library::removeBooks(string &isbnParam) {
    for(int i = 0; i < totalBooks; i++) {
        if(bookList[i].bookISBN == isbnParam) {
            for(int j = i; j < totalBooks - 1; j++) {
                bookList[j] = bookList[j + 1];
            }
            totalBooks--;
            return true;
        }
    }
    return false;
}

int main() {
    Library cityLibrary;
    string title1 = "C++", author1 = "Bjarne", isbn1 = "101";
    string title2 = "DSA", author2 = "CLRS", isbn2 = "102";
    string title3 = "OS", author3 = "Galvin", isbn3 = "103";
   
    cityLibrary.addNewBook(title1, author1, isbn1);
    cityLibrary.addNewBook(title2, author2, isbn2);
    cityLibrary.addNewBook(title3, author3, isbn3);

    string isbnToRemove = "103";
    cityLibrary.removeBooks(isbnToRemove);
    cityLibrary.displayDetails();
    
    return 0;
}