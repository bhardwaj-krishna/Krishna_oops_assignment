// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

struct Student {
    string fullName, degreeName, hostelName;
    int rollNumber;
    float currentCgpa;
    
    void addDetails() {
        cout << "Enter Name, Roll No, Degree, Hostel, CGPA:\n";
        cin >> fullName >> rollNumber >> degreeName >> hostelName >> currentCgpa;
    }
    
    void updateDetails() {
        cout << "Update Name and Degree:\n";
        cin >> fullName >> degreeName;
    }
    
    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCgpa;
    }
    
    void updatehostel() {
        cout << "Enter new Hostel: ";
        cin >> hostelName;
    }
    
    void displayDetails() {
        cout << "\nName: " << fullName
             << "\nRoll No: " << rollNumber
             << "\nDegree: " << degreeName
             << "\nHostel: " << hostelName
             << "\nCGPA: " << currentCgpa << endl;
    }
};

int main() {
    Student studentRecord;
    
    studentRecord.addDetails();
    studentRecord.displayDetails();
    studentRecord.updateCGPA();
    studentRecord.updatehostel();
    studentRecord.displayDetails();

    return 0;
}