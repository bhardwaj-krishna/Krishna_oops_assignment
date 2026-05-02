// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Demo {
    int value;
public:
    void set(int val) {
        this->value = val; 
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Demo demoObj;

    demoObj.set(10);
    demoObj.display();
    
    Demo *demoPtr = &demoObj;
    demoPtr->set(20);
    demoPtr->display();

    return 0;
}