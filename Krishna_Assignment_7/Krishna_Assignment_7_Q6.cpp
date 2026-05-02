// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
#include <cstring>
using namespace std;

class CustomString {
    char internalStr[100];
public:
    void set(char inputStr[]) {
        strcpy(internalStr, inputStr);
    }
    
    bool operator==(CustomString otherStr) {
        return strcmp(internalStr, otherStr.internalStr) == 0;
    }

    CustomString operator+(CustomString otherStr) {
        CustomString tempStr;
        strcpy(tempStr.internalStr, internalStr);
        strcat(tempStr.internalStr, otherStr.internalStr);
        return tempStr;
    }

    void display() {
        cout << internalStr << endl;
    }
};

int main() {
    CustomString str1, str2, str3;
    str1.set("Hello");
    str2.set("World");
    
    str3 = str1 + str2;
    str3.display();

    if(str1 == str2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
        
    return 0;
}