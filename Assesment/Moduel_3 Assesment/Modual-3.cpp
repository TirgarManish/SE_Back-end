#include<iostream>
#include<ctime>

using namespace std;

class ATM
{
private:
    int pin;
    long balance;

public:
    // Constructor
    ATM()
    {
        pin = 54321;
        balance = 120000;   // As per assessment
    }

    void welcomeScreen();
    void helpScreen();
    void atmMenu();
    void deposit();
    void withdraw();
    void checkBalance();
};

void ATM::welcomeScreen()
{
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "--------------------------------------------\n";
    cout << "        WELCOME TO ABC BANK ATM\n";
    cout << "--------------------------------------------\n";
    cout << "Date & Time : " << dt;
    cout << "--------------------------------------------\n";
    cout << "1. Enter ATM PIN\n";
    cout << "2. Help\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

void ATM::helpScreen()
{
    cout << "\n------------- HELP SCREEN -------------\n";
    cout << "Insert your ATM card\n";
    cout << "Enter correct ATM PIN\n";
    cout << "Choose the required transaction\n";
    cout << "Collect your receipt and card\n";
    cout << "---------------------------------------\n\n";
}

void ATM::atmMenu()
{
    int choice;
    do
    {
        cout << "\n------------- ATM MENU -------------\n";
        cout << "1. Deposit Amount\n";
        cout << "2. Withdraw Amount\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            cout << "\nThank you for using ABC Bank ATM!\n";
            break;
        default:
            cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);
}

void ATM::deposit()
{
    long amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;

    balance += amount;

    cout << "\n----------------------------------\n";
    cout << "Amount deposited successfully!\n";
    cout << "Current Balance : Rs. " << balance << endl;
    cout << "----------------------------------\n";
}

void ATM::withdraw()
{
    long amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "\n----------------------------------\n";
        cout << "Transaction Failed!\n";
        cout << "Insufficient Balance.\n";
        cout << "Available Balance : Rs. " << balance << endl;
        cout << "----------------------------------\n";
    }
    else
    {
        balance -= amount;
        cout << "\nWithdrawal Successful!\n";
        cout << "Remaining Balance : Rs. " << balance << endl;
    }
}

void ATM::checkBalance()
{
    cout << "\n----------------------------------\n";
    cout << "ACCOUNT BALANCE DETAILS\n";
    cout << "Available Balance : Rs. " << balance << endl;
    cout << "----------------------------------\n";
}

int main()
{
    ATM user;
    int choice, enteredPin;

    user.welcomeScreen();
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nEnter the ATM PIN: ";
        cin >> enteredPin;

        // One attempt only
        if (enteredPin == 54321)
        {
            cout << "\nPIN verified successfully!\n";
            user.atmMenu();
        }
        else
        {
            cout << "\nIncorrect PIN!\n";
            cout << "Thank you for visiting ABC Bank ATM.\n";
        }
    }
    else if (choice == 2)
    {
        user.helpScreen();
    }
    else
    {
        cout << "\nThank you for using ABC Bank ATM.\n";
    }

    return 0;
}
