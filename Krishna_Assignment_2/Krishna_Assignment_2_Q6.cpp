// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Demo {
public:
    static int demoCount;
};
int Demo::demoCount = 0;

class Test {
public:
    void show();
};

void Test::show() {
    cout << "Function outside class\n";
}

int value = 10; 

int main() {
    int value = 5;
    
    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;

    Demo::demoCount = 5;
    cout << Demo::demoCount << endl;

    int inputVal;
    std::cin >> inputVal;
    std::cout << inputVal;
    
    return 0;
}