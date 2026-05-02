// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    // (i) Destructor name starts with ~ and matches class name
    /*~Demo() {
        cout << "Destructor called\n";
    } */
    
    // (ii) Only ONE destructor allowed
    /* ~Demo(int val) { }   // ERROR: Destructor cannot be overloaded
    */    

    // (iii) Destructor cannot have parameters

    // (iv) No return type (not even void)
    /*
    void ~Demo() { }   // ERROR*/
};

int main() {
    cout << "Creating object demo1\n";
    Demo demo1;

    cout << "\nCreating object demo2 inside block\n";
    {
        Demo demo2;
        cout << "Inside block\n";
    } // demo2 destroyed

    cout << "\nBack to main\n";

    return 0;
}