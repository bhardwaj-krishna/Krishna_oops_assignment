// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
class ArrayContainer {
    T elements[5];
public:
    void inputData() {
        for(int i = 0; i < 5; i++)
            cin >> elements[i];
    }
    
    void displayData() {
        for(int i = 0; i < 5; i++)
            cout << elements[i] << " ";
    }
};

int main() {
    ArrayContainer<int> intArray;
    cout << "Enter the values: ";
    intArray.inputData();
    cout << "The values are: ";
    intArray.displayData();
    
    return 0;
}