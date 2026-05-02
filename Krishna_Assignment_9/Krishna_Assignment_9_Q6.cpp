// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // (a) Create A-Z file
    ofstream fileOut("alpha.txt");
    for(char ch = 'A'; ch <= 'Z'; ch++)
        fileOut << ch;
    fileOut.close();
    
    ifstream fileIn("alpha.txt");

    // Read 10th character
    fileIn.seekg(9); // index starts from 0
    char charVal;
    fileIn.get(charVal);
    cout << "10th character: " << charVal << endl;

    // (c) File size
    fileIn.seekg(0, ios::end);
    cout << "File size: " << fileIn.tellg() << endl;

    // (d) Last character
    fileIn.seekg(-1, ios::end);
    fileIn.get(charVal);
    cout << "Last character: " << charVal << endl;
    fileIn.close();

    // (b) Overwrite 5th number
    fstream numStream("num.txt", ios::in | ios::out);
    numStream << "123456789"; // initial data
    numStream.seekp(4);
    numStream.put('X');
    numStream.close();

    // (e) Multiple lines file
    ofstream dataOut("data.txt");
    dataOut << "Hello\nThis is C++ file\nLine3";
    dataOut.close();
    
    ifstream dataIn("data.txt");
    dataIn.seekg(10);
    cout << "Position: " << dataIn.tellg() << endl;
    cout << "Remaining content:\n";
    while(dataIn.get(charVal))
        cout << charVal;
    dataIn.close();

    // (f)
    fstream helloStream("hello.txt", ios::out | ios::in);
    string hwStr = "HelloWorld";
    for(int i = 0; i < hwStr.length(); i++) {
        helloStream.put(hwStr[i]);
        cout << "Position: " << helloStream.tellp() << endl;
    }
    // Replace "World" with "C++"
    helloStream.seekp(5);
    helloStream << "C++";
    helloStream.close();
    
    return 0;
}