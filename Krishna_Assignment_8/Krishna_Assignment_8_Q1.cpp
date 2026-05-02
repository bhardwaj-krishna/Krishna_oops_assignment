// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
void swapValues(T &val1, T &val2) {
    T tempValue = val1;
    val1 = val2;
    val2 = tempValue;
}

int main() {
    int intVal1 = 5, intVal2 = 10;
    swapValues(intVal1, intVal2);
    cout << "After swap: " << intVal1 << " ";
    cout << intVal2 << endl;

    float floatVal1 = 1.5, floatVal2 = 2.5;
    swapValues(floatVal1, floatVal2);
    cout << "After swap: " << floatVal1 << " " << floatVal2;
    
    return 0;
}