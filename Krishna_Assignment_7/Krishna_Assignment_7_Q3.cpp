// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <cmath>
using namespace std;

// Right angle triangle
float calculateArea(float base, float height) {
    return (base * height) / 2;
}

// Equilateral
float calculateArea(float sideLength) {
    return (sqrt(3) / 4) * sideLength * sideLength;
}

// Isosceles
float calculateArea(float sideA, float sideB, float sideC) {
    float semiPerimeter = (sideA + sideB + sideC) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));
}

int main() {
    cout << "Right triangle: " << calculateArea(4, 5) << endl;
    cout << "Equilateral: " << calculateArea(3) << endl;
    cout << "Isosceles: " << calculateArea(3, 3, 4) << endl;
    
    return 0;
}