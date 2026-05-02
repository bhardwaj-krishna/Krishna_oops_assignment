// name: Krishna Bhardwaj
// roll number:1024150316
#include <iostream>
using namespace std;

int main() {
    int val1 = 5, val2 = 10;

    val1 = val1 ^ val2;
    val2 = val1 ^ val2;
    val1 = val1 ^ val2;
    
    cout << "After swapping: val1 = " << val1 << ", val2 = " << val2;
    
    return 0;
}