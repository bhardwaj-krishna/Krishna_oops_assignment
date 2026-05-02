// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is Base class\n";
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "This is Derived class\n";
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;
    
    baseObj.showBase();
    derivedObj.showBase();     // inherited
    derivedObj.showDerived();  // own function

    return 0;
}