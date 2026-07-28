#include <iostream>
using namespace std;

class ATM
{
public:
    int balance = 1000;

    void checkBalance()
    {
        cout << "Balance = " << balance << endl;
    }

    void deposit()
    {
        int amount;
        cout << "Enter amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount: ";
        cin >> amount;

        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient balance" << endl;
    }
};

int main()
{
    ATM a;
    int choice;

    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        a.checkBalance();
    else if (choice == 2)
        a.deposit();
    else if (choice == 3)
        a.withdraw();
    else
        cout << "Invalid choice";

    return 0;
}