// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class ClassB; 

class ClassA {
    int valA;
public:
    void set(int a) { valA = a; }
    friend void swapValues(ClassA &, ClassB &);
    void show() { cout << "A: " << valA << endl; }
};

class ClassB {
    int valB;
public:
    void set(int b) { valB = b; }
    friend void swapValues(ClassA &, ClassB &);
    void show() { cout << "B: " << valB << endl; }
};

void swapValues(ClassA &objA, ClassB &objB) {
    int tempVal = objA.valA;
    objA.valA = objB.valB;
    objB.valB = tempVal;
}

int main() {
    ClassA objA;
    ClassB objB;
    
    objA.set(5);
    objB.set(10);
    
    swapValues(objA, objB);
    
    objA.show();
    objB.show();
    
    return 0;
}