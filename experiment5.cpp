#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;   // Hidden data

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }
    void deposit(double amount) {
        if (amount > 0) 
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(101, 5000);

    account.display();

    account.deposit(2000);
    account.withdraw(1500);

    cout << "\nAfter transactions:\n";
    account.display();

    return 0;
}