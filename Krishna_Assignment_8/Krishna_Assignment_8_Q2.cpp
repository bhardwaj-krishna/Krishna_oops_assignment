// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
T findMin(T dataArray[], int size) {
    T minValue = dataArray[0];
    for(int i = 1; i < size; i++) {
        if(dataArray[i] < minValue)
            minValue = dataArray[i];
    }
    return minValue;
}

int main() {
    int numArray[] = {5, 2, 9, 1};
    cout << "Min: " << findMin(numArray, 4);
    return 0;
}