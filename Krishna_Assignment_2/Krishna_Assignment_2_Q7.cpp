// name: Krishna Bhardwaj
// roll number: 1024150316
#include <iostream>
using namespace std;

namespace NamespaceA {
    int value = 10;
    void show() {
        cout << "Namespace A\n";
    }
}

namespace NamespaceB {
    int value = 20;
    void show() {
        cout << "Namespace B\n";
    }
}

int main() {
    cout << NamespaceA::value << endl;
    NamespaceA::show();
    
    cout << NamespaceB::value << endl;
    NamespaceB::show();

    return 0;
}