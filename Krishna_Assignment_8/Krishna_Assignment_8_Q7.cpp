// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
class Queue {
    T elements[5];
    int frontIndex, rearIndex;
public:
    Queue() { frontIndex = rearIndex = -1; }
    
    void enqueue(T value) {
        if(rearIndex == 4)
            cout << "Queue Full\n";
        else {
            if(frontIndex == -1) frontIndex = 0;
            elements[++rearIndex] = value;
        }
    }
    
    void dequeue() {
        if(frontIndex == -1 || frontIndex > rearIndex)
            cout << "Queue Empty\n";
        else
            cout << "Dequeued: " << elements[frontIndex++] << endl;
    }
};

int main() {
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.dequeue();
    
    return 0;
}