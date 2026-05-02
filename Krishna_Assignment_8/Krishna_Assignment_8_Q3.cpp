// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T dataArray[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(dataArray[j] > dataArray[j + 1]) {
                T tempValue = dataArray[j];
                dataArray[j] = dataArray[j + 1];
                dataArray[j + 1] = tempValue;
            }
        }
    }
}

int main() {
    int numArray[] = {5, 3, 2, 4};
    bubbleSort(numArray, 4);

    for(int i = 0; i < 4; i++)
        cout << numArray[i] << " ";
        
    return 0;
}