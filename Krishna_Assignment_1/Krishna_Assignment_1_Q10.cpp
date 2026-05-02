// name: Krishna Bhardwaj
// roll number:1024150316
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    
    cout << "Enter number: ";
    cin >> inputNumber;
    
    if (inputNumber % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
        
    cout << endl;
    
    (inputNumber % 2 == 0) ? cout << "Even" : cout << "Odd";
    
    return 0;
}