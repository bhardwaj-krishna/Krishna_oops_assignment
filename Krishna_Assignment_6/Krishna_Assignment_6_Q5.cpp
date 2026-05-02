// name: Krishna Bhardwaj
// roll number: 1024150316
#include<iostream>
using namespace std;

class ComplexNumber {
    int realPart, imagPart;
public:
    ComplexNumber(int r, int i) : realPart(r), imagPart(i) {}
    void display() { 
        cout << realPart << "+" << imagPart << "i\n"; 
    }
    friend ComplexNumber calculateSum(ComplexNumber, ComplexNumber);
};

ComplexNumber calculateSum(ComplexNumber compA, ComplexNumber compB) {
    return ComplexNumber(compA.realPart + compB.realPart, compA.imagPart + compB.imagPart);
}

int main() {
    calculateSum(ComplexNumber(1, 2), ComplexNumber(3, 4)).display();
    return 0;
}