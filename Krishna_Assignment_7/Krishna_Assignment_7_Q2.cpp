// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }

    void display() {
        cout << "Shape: Circle\n";
    }
};

class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) { length = l; breadth = b; }

    void area() {
        cout << "Rectangle Area: " << length * breadth << endl;
    }

    void display() {
        cout << "Shape: Rectangle\n";
    }
};

class Triangle : public Shape {
    int base, height;
public:
    Triangle(int b, int h) { base = b; height = h; }

    void area() {
        cout << "Triangle Area: " << (base * height) / 2 << endl;
    }

    void display() {
        cout << "Shape: Triangle\n";
    }
};

int main() {
    Shape *shapePtr;

    Circle circleObj(3);
    Rectangle rectObj(4, 5);
    Triangle triObj(4, 6);
    
    shapePtr = &circleObj; 
    shapePtr->display(); 
    shapePtr->area();
    
    shapePtr = &rectObj; 
    shapePtr->display(); 
    shapePtr->area();
    
    shapePtr = &triObj; 
    shapePtr->display(); 
    shapePtr->area();
    
    return 0;
}