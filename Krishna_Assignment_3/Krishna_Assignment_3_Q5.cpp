// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    void getData() {
        cin >> length >> breadth;
    }
    void calculateArea() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle rectArray[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter length and breadth: ";
        rectArray[i].getData();
    }
    
    for(int i = 0; i < 3; i++) {
        rectArray[i].calculateArea();
    }
    
    return 0;
}