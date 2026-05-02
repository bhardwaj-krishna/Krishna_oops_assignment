// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Demo {
    int value;
public:
    friend istream& operator >>(istream &inStream, Demo &demoObj) {
        inStream >> demoObj.value;
        return inStream;
    }

    friend ostream& operator <<(ostream &outStream, Demo &demoObj) {
        outStream << demoObj.value;
        return outStream;
    }
};

int main() {
    Demo myDemo;
    cout << "Enter value: ";
    cin >> myDemo;
    cout << "Output: " << myDemo;

    return 0;
}