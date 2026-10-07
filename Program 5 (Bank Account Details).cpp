//Program 5 : Program to display Bank account details
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    float balance;

public:
    // Function to accept account details
    void accept()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        
		cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw money
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to display balance
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    float amount;

    b.accept();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    b.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    b.withdraw(amount);

    b.display();

    return 0;
}
