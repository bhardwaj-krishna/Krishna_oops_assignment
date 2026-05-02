// name: Krishna Bhardwaj
// roll number: 1024150316
#include<iostream>
using namespace std;

class ClassB;
class ClassA {
    int valA;
public:
    ClassA(int a) : valA(a) {}
    friend int addValues(ClassA, ClassB);
};

class ClassB {
    int valB;
public:
    ClassB(int b) : valB(b) {}
    friend int addValues(ClassA, ClassB);
};

int addValues(ClassA objA, ClassB objB) { 
    return objA.valA + objB.valB; 
}

int main() {
    cout << addValues(ClassA(10), ClassB(20));
    return 0;
}