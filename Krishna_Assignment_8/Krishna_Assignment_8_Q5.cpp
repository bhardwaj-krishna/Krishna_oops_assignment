// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
void processData(T paramA) {
    cout << "One parameter: " << paramA << endl;
}

template <class T>
void processData(T paramA, T paramB) {
    cout << "Same type: " << paramA << " " << paramB << endl;
}

template <class T, class U>
void processData(T paramA, U paramB) {
    cout << "Different types: " << paramA << " " << paramB << endl;
}

int main() {
    processData(5);
    processData(5, 10);
    processData(5, 2.5);
    
    return 0;
}