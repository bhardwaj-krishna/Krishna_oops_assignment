// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Student {
private:
    string studentName, degreeProgram, hostelBlock;
    int studentRollNo;
    float studentCgpa;
    
    void secretFunction() {   
        cout << "Private function called\n";
    }
    
public:
    void addDetails() {
        cin >> studentName >> studentRollNo >> degreeProgram >> hostelBlock >> studentCgpa;
    }
    
    void updateCGPA() {
        cin >> studentCgpa;
    }
    
    void displayDetails() {
        secretFunction(); 
        cout << studentName << " " << studentRollNo << " " << degreeProgram << " "
             << hostelBlock << " " << studentCgpa << endl;
    }
};

int main() {
    Student myStudent;
    
    myStudent.addDetails();
    myStudent.displayDetails();
    
    return 0;
}