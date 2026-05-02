// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int valA;
public:
    void set(int a) { valA = a; }
    friend int addValues(ClassA, ClassB);
};

class ClassB {
    int valB;
public:
    void set(int b) { valB = b; }
    friend int addValues(ClassA, ClassB);
};

int addValues(ClassA objA, ClassB objB) {
    return objA.valA + objB.valB;
}

int main() {
    ClassA objA;
    ClassB objB;
    
    objA.set(5);
    objB.set(7);
    
    cout << "Sum = " << addValues(objA, objB);
    
    return 0;
}