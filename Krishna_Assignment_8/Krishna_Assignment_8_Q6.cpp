// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
class Stack {
    T elements[5];
    int topIndex;
public:
    Stack() { topIndex = -1; }
    
    void push(T value) {
        if(topIndex == 4)
            cout << "Stack Overflow\n";
        else
            elements[++topIndex] = value;
    }
    
    void pop() {
        if(topIndex == -1)
            cout << "Stack Underflow\n";
        else
            cout << "Popped: " << elements[topIndex--] << endl;
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.pop();
    
    return 0;
}