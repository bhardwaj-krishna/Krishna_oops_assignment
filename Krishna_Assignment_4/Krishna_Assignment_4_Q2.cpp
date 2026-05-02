// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Rectangle {
    int rectLength, rectBreadth;
public:
    // Constructor with default arguments
    Rectangle(int l = 0, int b = 0) {
        rectLength = l;
        rectBreadth = b;
    }
    
    int calculateArea() {
        return rectLength * rectBreadth;
    }
    
    ~Rectangle() {
        cout << "Destructor called\n";
    }
};

int main() {
    Rectangle rectArray[3] = { Rectangle(), Rectangle(5), Rectangle(4, 6) };

    for(int i = 0; i < 3; i++) {
        cout << "Area " << i + 1 << ": " << rectArray[i].calculateArea() << endl;
    }

    return 0;
}