#include "Bank_Account.cpp"
using namespace std;

int main()
{
    CheckingAccount account1;
    FixedDepositAccount account2;
    SavingsAccount account3;

    account1.setAccountDetails();
    int choice;
    float amount;

    do
    {
        cout << endl
             << "Bank Account Features : " << endl;
        cout << "Press 1 for Amount Deposit" << endl;
        cout << "Press 2 for Amount Withdrawal" << endl;
        cout << "Press 3 for Amount Display" << endl;
        cout << "Press 4 for Set Interest(saving)" << endl;
        cout << "Press 5 for Add Interest(saving)" << endl;
        cout << "Press 6 for check overdrafting(Checking)" << endl;
        cout << "Press 7 for Fixed Deposite : " << endl;
        cout << "Press 0 for Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Deposit..." << endl;
            account1.deposit();
            break;
        case 2:
            cout << "Withdrawal.." << endl;
            account1.withdraw();
            break;
        case 3:
            cout << "Display Details.." << endl;
            account1.getAccountDetails();
            break;
        case 4:
            cout << "Set Interest... " << endl;
            account3.setInterestRate();
            break;
        case 5:
            cout << "Add Interest...." << endl;
            account3.addInterest();
            break;
        case 6:
            cout << "Check OverDraft..." << endl;
            account1.checkOverdraft();
            break;

        case 7:
            cout << "Fixed Deposit..." << endl;
            account2.setAccountDetails();
            account2.setTermData();
            account2.deposit();
            account2.calculateInterest();
            cout << endl;
            break;
        case 0:
            cout << "Exited... " << endl;
            break;
        default:
        cout << "Invalid Choice..!" << endl;
            break;
        }
    } while (choice != 0);
}