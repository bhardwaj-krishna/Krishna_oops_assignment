// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Demo {
private:
    void show() {
        cout << "Private function called\n";
    }
    
public:
    void display() {
        show(); // allowed
    }
};

int main() {
    Demo demoObj;
    demoObj.display();
    
    return 0;
}