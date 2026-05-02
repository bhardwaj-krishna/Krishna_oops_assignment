// name: Krishna Bhardwaj
// roll number:1024150316
#include <iostream>
using namespace std;

int main() {
    float operand1, operand2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> operand1 >> operand2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    
    switch(operation) {
        case '+': cout << operand1 + operand2; break;
        case '-': cout << operand1 - operand2; break;
        case '*': cout << operand1 * operand2; break;
        case '/': cout << operand1 / operand2; break;
        default: cout << "Invalid operator";
    }
    
    return 0;
}