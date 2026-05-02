// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Base {
protected:
    int protectedValue;
public:
    void set(int a) {
        protectedValue = a;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Value of protectedValue: " << protectedValue; // accessible (protected)
    }
};

int main() {
    Derived derivedObj;
    derivedObj.set(10);
    derivedObj.display();

    return 0;
}