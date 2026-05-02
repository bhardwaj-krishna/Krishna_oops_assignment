// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T1, class T2>
class PairData {
    T1 firstVal;
    T2 secondVal;
public:
    void set(T1 val1, T2 val2) {
        firstVal = val1;
        secondVal = val2;
    }
    
    void display() {
        cout << firstVal << " " << secondVal;
    }
};

int main() {
    PairData<int, float> dataPair;
    dataPair.set(5, 2.5);
    dataPair.display();
    
    return 0;
}