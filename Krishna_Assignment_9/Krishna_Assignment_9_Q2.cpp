// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

void countAlphabets() {
    ifstream notesFile("NOTES.TXT");
    char character;
    int alphaCount = 0;
    
    while(notesFile.get(character)) {
        if(isalpha(character))
            alphaCount++;
    }
    
    cout << "Total alphabets = " << alphaCount;
    notesFile.close();
}

int main() {
    countAlphabets();
    return 0;
}