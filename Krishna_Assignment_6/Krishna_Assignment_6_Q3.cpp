// name: Krishna Bhardwaj
// roll number: 1024150316
#include<iostream>
using namespace std;

class Account {
    const long accountNumber;
    double currentBalance;
    long transactionID;
    static int globalId;

public:
    Account(long accNum, double initialBal) : accountNumber(accNum), currentBalance(initialBal) { 
        transactionID = 0; 
    }

    long depositAmount(const long &toAcc, const long &fromAcc, const double &amount) {
        if(accountNumber == toAcc) { 
            currentBalance += amount; 
            return transactionID = ++globalId; 
        }
        return -1;
    }

    long creditAmount(const long &toAcc, const long &fromAcc, const double &amount) {
        if(accountNumber == fromAcc) { 
            currentBalance -= amount; 
            return transactionID = ++globalId; 
        }
        return -1;
    }

    void displayDetails() const {
        cout << accountNumber << " " << currentBalance << " " << transactionID << endl;
    }
};

int Account::globalId = 0;

int main() {
    Account myAccount(1, 1000);
    myAccount.depositAmount(1, 0, 200);
    myAccount.displayDetails();
    return 0;
}