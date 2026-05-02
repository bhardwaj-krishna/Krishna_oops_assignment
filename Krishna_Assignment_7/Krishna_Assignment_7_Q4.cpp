// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() = 0;
};

class Engineering : public Student {
public:
    void show() { cout << "Engineering Student\n"; }
};

class Medicine : public Student {
public:
    void show() { cout << "Medicine Student\n"; }
};

class Science : public Student {
public:
    void show() { cout << "Science Student\n"; }
};

int main() {
    Student* studentPtrs[3];
    
    Engineering engStudent;
    Medicine medStudent;
    Science sciStudent;

    studentPtrs[0] = &engStudent;
    studentPtrs[1] = &medStudent;
    studentPtrs[2] = &sciStudent;
    
    for(int i = 0; i < 3; i++) {
        studentPtrs[i]->show();
    }
    
    return 0;
}