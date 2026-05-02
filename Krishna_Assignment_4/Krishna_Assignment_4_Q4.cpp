// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Demo {
public:
    int value;
    Demo(int val) {
        value = val;
        cout << "Object created with value " << value << endl;
    }
    ~Demo() {
        cout << "Object destroyed\n";
    }
};

int main() {
    // Integer variable
    int *intPtr = new int;
    *intPtr = 10;
    cout << "Integer: " << *intPtr << endl;
    delete intPtr;

    // Float variable
    float *floatPtr = new float;
    *floatPtr = 3.14;
    cout << "Float: " << *floatPtr << endl;
    delete floatPtr;

    // Integer array
    int *intArray = new int[3];
    for(int i = 0; i < 3; i++) intArray[i] = i + 1;
    cout << "Integer Array: ";
    for(int i = 0; i < 3; i++) cout << intArray[i] << " ";
    cout << endl;
    delete[] intArray;

    // Float array
    float *floatArray = new float[3];
    for(int i = 0; i < 3; i++) floatArray[i] = i + 0.5;

    cout << "Float Array: ";
    for(int i = 0; i < 3; i++) cout << floatArray[i] << " ";
    cout << endl;
    delete[] floatArray;

    // Class object
    Demo *objPtr = new Demo(100);
    delete objPtr;

    // Array of objects
    Demo *objArray = new Demo[2]{Demo(1), Demo(2)};
    delete[] objArray;

    return 0;
}