#include <iostream>
#include <string.h>
using namespace std;

// Base class == parent class
class BankAccount
{
protected:
    long long int accountNumber;
    char accountHolderName[100];
    float balance;

    // setter
public:
    void setAccountDetails()
    {
        cout << endl
             << "-----------------Enter Bank Details-----------------" << endl;
        cout << "Enter Your Unique Account Number : ";
        cin >> accountNumber;
        fflush(stdin);
        cout << "Enter Account Holder Name : ";
        gets(accountHolderName);
    }
    // deposit
    void deposit()
    {
        double amount;
        cout << "Enter Deposit Amount : ";
        cin >> amount;
        balance += amount;
        cout << endl
             << "Amount Deposited successfully..." << endl
             << endl;
    }

    // getter
    void getAccountDetails()
    {
        cout << endl
             << "-----------------Display Account Details-----------------" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Your Account Balance : " << (float)balance << endl;
    }

    // Withdrawal
    void withdrawal()
    {
        double amount;
        cout << "Enter Withdrawal Amount : ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient Account Balance..." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawal successfully...." << endl;
        }
    }
};

// Derived class = child class
class SavingsAccount : public BankAccount
{
protected:
    float interestRate;

public:
    void setInterestRate()
    {
        cout << "Enter Interest Rate : ";
        cin >> interestRate;
    }

    void addInterest()
    {
        int year;
        cout << "Enter Rate of Interest for year (in digit) : ";
        cin >> year;
        float interest = (balance * interestRate * year) / 100;
        cout << "Interest Added : " << interest << endl;
        balance += interest;
        cout << "Your Balance is after Interest : " << balance << endl;
    }
};

class CheckingAccount : public BankAccount
{
protected:
    static int overdraftLimit;

public:
    // withdraw
    void withdraw()
    {
        int amount;
        cout << "Enter withdrawal Amount : ";
        cin >> amount;
        if (amount > balance + overdraftLimit)
        {
            cout << "Withdrawal exceeds overdraft limit..! " << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawal successfully Done.." << endl;
        }
    }
    void checkOverdraft()
    {
        cout << "Your Current balance : " << balance << endl;
        cout << "Your Overdraft Limit : " << overdraftLimit << endl;
    }
};
int CheckingAccount::overdraftLimit = 5000;

class FixedDepositAccount : public BankAccount
{
protected:
    int term;                  // term in month
    static float interestRate; // static interest rate

public:
    void setTermData()
    {
        cout << "Enter the term for Month : ";
        cin >> term;
    }

    void calculateInterest()
    {
        float interest = (balance * interestRate * term) / (100 * 12);
        cout << "Interest Received : " << interest << endl;
        cout << "Total Amount after Interest : " << balance + interest << endl;
    }
};
float FixedDepositAccount::interestRate = 6.0;