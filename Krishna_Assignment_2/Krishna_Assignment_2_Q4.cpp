// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Rectangle {
    int rectWidth, rectHeight;
    
public:
    void getdata() {
        cout << "Enter width and height: ";
        cin >> rectWidth >> rectHeight;
    }
    
    void calculatearea() {
        cout << "Area = " << rectWidth * rectHeight;
    }
};

int main() {
    Rectangle rectObj;
    
    rectObj.getdata();
    rectObj.calculatearea();
    
    return 0;
}