// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string inputData;

    cout << "Enter something: ";
    cin >> inputData;
    
    ofstream outFile("data.txt", ios::binary);
    outFile << inputData;   
    outFile.close();
    
    ifstream inFile("data.txt", ios::binary);
    inFile >> inputData;    
    inFile.close();

    cout << "From file: " << inputData;

    return 0;
}