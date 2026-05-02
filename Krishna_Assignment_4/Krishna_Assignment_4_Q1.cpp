// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Rectangle {
    int rectLength, rectBreadth;
public:
    // a. No parameter constructor
    Rectangle() {
        rectLength = 0;
        rectBreadth = 0;
    }
    
    // b. Two parameter constructor
    Rectangle(int l, int b) {
        rectLength = l;
        rectBreadth = b;
    }

    // c. One parameter constructor
    Rectangle(int side) {
        rectLength = rectBreadth = side;
    }
    
    int calculateArea() {
        return rectLength * rectBreadth;
    }
};

int main() {
    Rectangle rect1;        
    Rectangle rect2(5);     
    Rectangle rect3(4, 6);  

    cout << "Area rect1: " << rect1.calculateArea() << endl;
    cout << "Area rect2: " << rect2.calculateArea() << endl;
    cout << "Area rect3: " << rect3.calculateArea() << endl;

    return 0;
}