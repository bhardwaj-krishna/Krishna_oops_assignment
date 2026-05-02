// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream numFile;
    numFile.open("NUM.TXT");
    for(int number = 1; number <= 200; number++) {
        numFile << number << endl;
    }
    numFile.close();
    cout << "Data written successfully";
    
    return 0;
}