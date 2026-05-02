// name: Krishna Bhardwaj
// roll number: 1024150316
#include<iostream>
using namespace std;

class Book {
public:
    string bookTitle, bookAuthor, bookISBN;
    Book() {
        this->bookTitle = "";
        this->bookAuthor = "";
        this->bookISBN = "";
    }
    Book(string titleParam, string authorParam, string isbnParam) {
        this->bookTitle = titleParam;
        this->bookAuthor = authorParam;
        this->bookISBN = isbnParam;
    }
    Book(const Book &otherBook) {
        this->bookTitle = otherBook.bookTitle;
        this->bookAuthor = otherBook.bookAuthor;
        this->bookISBN = otherBook.bookISBN;
    }
};

class Library {
    Book bookList[100];
    int totalBooks = 0;
public:
    bool addNewBook(const string &titleParam, const string &authorParam, const string &isbnParam) {
        if(totalBooks >= 100) return false;

        bookList[totalBooks] = Book(titleParam, authorParam, isbnParam);
        totalBooks++;
        return true;
    }

    bool removeBooks(const string &isbnParam) {
        for(int i = 0; i < totalBooks; i++) {
            if(bookList[i].bookISBN == isbnParam) {
                for(int j = i; j < totalBooks - 1; j++)
                    bookList[j] = bookList[j + 1];
                totalBooks--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for(int i = 0; i < totalBooks; i++) {
            cout << bookList[i].bookTitle << " "
                 << bookList[i].bookAuthor << " "
                 << bookList[i].bookISBN << endl;
        }
    }
};

int main() {
    Library myLib;

    Book initialBooks[2] = {
        Book("Math", "Krishna Bhardwaj", "201"),
        Book("Physics", "Krishna Bhardwaj", "202")
    };
    Book *newBook = new Book("Chemistry", "Krishna Bhardwaj", "203");

    myLib.addNewBook(initialBooks[0].bookTitle, initialBooks[0].bookAuthor, initialBooks[0].bookISBN);
    myLib.addNewBook(initialBooks[1].bookTitle, initialBooks[1].bookAuthor, initialBooks[1].bookISBN);
    myLib.addNewBook(newBook->bookTitle, newBook->bookAuthor, newBook->bookISBN);

    myLib.displayDetails();
    
    delete newBook;
    return 0;
}