// name: Krishna Bhardwaj
// roll number:1024150316
#include <iostream>
using namespace std;

int main() {
    int lateDays;
    float totalFine = 0;

    cout << "Enter number of late days: ";
    cin >> lateDays;
    
    if (lateDays > 30) {
        cout << "Membership Cancelled";
    }
    else if (lateDays <= 5) {
        totalFine = lateDays * 0.50;
    }
    else if (lateDays <= 10) {
        totalFine = (5 * 0.50) + (lateDays - 5) * 1;
    }
    else {
        totalFine = (5 * 0.50) + (5 * 1) + (lateDays - 10) * 5;
    }
    
    if (lateDays <= 30) {
        cout << "Fine = Rs. " << totalFine;
    }
        
    return 0;
}