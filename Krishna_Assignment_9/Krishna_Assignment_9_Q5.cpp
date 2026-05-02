// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    char strBuffer[100];
    cout << "Enter string: ";
    cin.getline(strBuffer, 100);
    cout << "Length: " << strlen(strBuffer) << endl;
    
    ofstream outFile("text.txt");
    outFile << strBuffer;
    outFile.close();
    
    ifstream inFile("data.txt");
    cout << "From file: ";
    while(inFile.getline(strBuffer, 100)) {
        cout << strBuffer;
    }
    inFile.close();
    
    return 0;
}