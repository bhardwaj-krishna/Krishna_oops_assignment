// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Number {
    int val1;
public:
    void set(int a) { val1 = a; }

    Number add(Number n) { 
        Number tempObj;
        tempObj.val1 = val1 + n.val1;
        return tempObj;
    }
    void show() { cout << val1 << endl; }
};

class Number2 {
    int val2;
public:
    void set(int a) { val2 = a; }
    
    Number2 add(Number2 &n) {   
        Number2 tempObj2;
        tempObj2.val2 = val2 + n.val2;
        return tempObj2;
    }
    void show() { cout << val2 << endl; }
};

int main() {
    Number numA, numB, numC;

    numA.set(10);
    numB.set(20);

    numC = numA.add(numB);
    numC.show();

    Number2 numX, numY, numZ;

    numX.set(15);
    numY.set(25);

    numZ = numX.add(numY);
    numZ.show();
    
    return 0;
}