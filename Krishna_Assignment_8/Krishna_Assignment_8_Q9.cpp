// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T operand1, operand2;
public:
    void setValues(T val1, T val2) {
        operand1 = val1;
        operand2 = val2;
    }
    
    void showResults() {
        cout << "Add: " << operand1 + operand2 << endl;
        cout << "Sub: " << operand1 - operand2 << endl;
        cout << "Mul: " << operand1 * operand2 << endl;
        cout << "Div: " << operand1 / operand2 << endl;
    }
};

int main() {
    Calculator<int> calc;
    calc.setValues(10, 5);
    calc.showResults();
    
    return 0;
}