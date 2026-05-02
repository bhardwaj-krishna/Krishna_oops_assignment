// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

template <class T>
int linearSearch(T dataArray[], int size, T searchKey) {
    for(int i = 0; i < size; i++) {
        if(dataArray[i] == searchKey)
            return i;
    }
    return -1;
}

int main() {
    int numArray[] = {10, 20, 30, 40};
    int position = linearSearch(numArray, 4, 30);
    
    if(position != -1)
        cout << "Found at index " << position;
    else
        cout << "Not found";
        
    return 0;
}