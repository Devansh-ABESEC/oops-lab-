#include <bits/stdc++.h>
using namespace std;

class ATM
{
private:
    double balance;

public:
    ATM()
    {
        balance = 1000;
    }
    void checkBalance()
    {
        cout << "Current Balance: £" << balance << endl;
    }

    // Deposit money
    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: £";
        cin >> amount;

        balance += amount;
        cout << "Amount deposited successfully!" << endl;
    }

    // Withdraw money
    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: £";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Please collect your cash." << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main()
{
    ATM account;
    int choice;

    do
    {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.checkBalance();
            break;

        case 2:
            account.deposit();
            break;

        case 3:
            account.withdraw();
            break;

        case 4:
            cout << "Thank you for using ATM!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}