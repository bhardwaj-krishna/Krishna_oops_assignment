// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream srcFile("data.txt");
    ofstream destFile("destination.txt");
    char character;
    
    while(srcFile.get(character)) {
        destFile.put(character);
    }
    
    cout << "File copied successfully";
    srcFile.close();
    destFile.close();
    
    return 0;
}