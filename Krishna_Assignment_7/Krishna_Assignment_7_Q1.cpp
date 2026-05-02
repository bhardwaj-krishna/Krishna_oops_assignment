// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Polygon {
protected:
    int polyWidth, polyHeight;

public:
    void set_value(int w, int h) {
        polyWidth = w;
        polyHeight = h;
    }
    virtual int calculate_area() = 0; 
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return polyWidth * polyHeight;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (polyWidth * polyHeight) / 2;
    }
};

int main() {
    Polygon *polyPtr;

    Rectangle rectObj;
    Triangle triObj;
    
    polyPtr = &rectObj;
    polyPtr->set_value(4, 5);
    cout << "Rectangle Area: " << polyPtr->calculate_area() << endl;

    polyPtr = &triObj;
    polyPtr->set_value(4, 5);
    cout << "Triangle Area: " << polyPtr->calculate_area() << endl;

    return 0;
}