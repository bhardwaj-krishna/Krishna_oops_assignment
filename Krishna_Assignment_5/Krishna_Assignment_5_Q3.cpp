// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Base {
public:
    int publicVal;
protected:
    int protectedVal;
private:
    int privateVal;
};

// PUBLIC inheritance
class ClassA : public Base {
public:
    void show() {
        cout << publicVal << " " << protectedVal << endl; // publicVal, protectedVal accessible
    }
};

// PROTECTED inheritance
class ClassB : protected Base {
public:
    void show() {
        cout << publicVal << " " << protectedVal << endl; // become protected
    }
};

// PRIVATE inheritance
class ClassC : private Base {
public:
    void show() {
        cout << publicVal << " " << protectedVal << endl; // become private
    }
};

int main() {
    ClassA objA;
    objA.publicVal = 5;  // allowed
    
    ClassB objB;
    // objB.publicVal = 5; ❌ not allowed
    
    ClassC objC;
    // objC.publicVal = 5; ❌ not allowed

    return 0;
}