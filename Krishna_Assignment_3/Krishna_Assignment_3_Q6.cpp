// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

inline int calculateCube(int num) {
    return num * num * num;
}

int main() {
    int inputNum;
    
    cout << "Enter number: ";
    cin >> inputNum;
    
    cout << "Cube = " << calculateCube(inputNum);
    
    return 0;
}