/*Class for Bank Account
o Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private.*/

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;   // data member (private)

public:
    // Constructor (initial balance set karne ke liye)
    BankAccount(double initialBalance)
    {
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposit Successful. New Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful. Remaining Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Balance check function
    void showBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc(1000);  // object create with initial balance

    acc.showBalance();

    int deposit ;
    cout<<"Enter the Deposite Amount: ";
    cin>>deposit;

    acc.deposit(deposit);

    int withdraw;
    cout<<"Enter The withrawal Amount: ";
    cin>>withdraw;

    acc.withdraw(withdraw);
    acc.showBalance();

    return 0;
}
