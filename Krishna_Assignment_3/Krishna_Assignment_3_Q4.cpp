// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class ClassA {
    int secretValue;
public:
    void set(int a) { secretValue = a; }
    friend class ClassB; 
};

class ClassB {
public:
    void show(ClassA objA) {
        cout << "Value of A: " << objA.secretValue; 
    }
};

int main() {
    ClassA objA;
    objA.set(100);

    ClassB objB;
    objB.show(objA);
    
    return 0;
}