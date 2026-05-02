// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Complex {
    float realPart, imaginaryPart;

public:
    void setComplex(float rPart, float iPart) {
        realPart = rPart;
        imaginaryPart = iPart;
    }
    
    void displayComplex() {
        cout << realPart << " + " << imaginaryPart << "i\n";
    }
    
    Complex add(Complex otherComplex) {
        Complex sumResult;
        sumResult.realPart = realPart + otherComplex.realPart;
        sumResult.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart;
        return sumResult;
    }
};

int main() {
    Complex complex1, complex2, complexSum;

    complex1.setComplex(2, 3);
    complex2.setComplex(4, 5);

    complexSum = complex1.add(complex2);

    cout << "Sum: ";
    complexSum.displayComplex();
    
    return 0;
}