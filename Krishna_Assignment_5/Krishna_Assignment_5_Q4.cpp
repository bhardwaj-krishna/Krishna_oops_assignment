// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

// Base class
class ClassA {
public:
    void showA() {
        cout << "Class A\n";
    }
};

// Single Inheritance 
class ClassB : public ClassA {
public:
    void showB() {
        cout << "Class B (Single Inheritance)\n";
    }
};

// Multilevel Inheritance 
class ClassC : public ClassB {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance)\n";
    }
};

// Hierarchical Inheritance 
class ClassD : public ClassA {
public:
    void showD() {
        cout << "Class D (Hierarchical Inheritance)\n";
    }
};

// - Multiple Inheritance -
class ClassE {
public:
    void showE() {
        cout << "Class E\n";
    }
};

class ClassF : public ClassA, public ClassE {
public:
    void showF() {
        cout << "Class F (Multiple Inheritance)\n";
    }
};

// - Hybrid Inheritance -
class ClassG : public ClassC, public ClassD {
public:
    void showG() {
        cout << "Class G (Hybrid Inheritance)\n";
    }
};

int main() {
    cout << "Single Inheritance\n";
    ClassB objB;
    objB.showA();
    objB.showB();

    cout << "\nMultilevel Inheritance\n";
    ClassC objC;
    objC.showA();
    objC.showB();
    objC.showC();

    cout << "\nHierarchical Inheritance\n";
    ClassD objD;
    objD.showA();
    objD.showD();

    cout << "\nMultiple Inheritance\n";
    ClassF objF;
    objF.showA();
    objF.showE();
    objF.showF();

    cout << "\nHybrid Inheritance\n";
    ClassG objG;
    // objG.showA(); ❌ ambiguous (diamond problem)
    objG.ClassC::showA(); // resolved using scope resolution
    objG.showG();

    return 0;
}