#include <iostream>
using namespace std;

// Using User Defined Function (UDF)

int addition(int a, int b)
{
    return a + b; // Addition
}

int subtraction(int a, int b)
{
    return a - b; // subtraction
}

int multiply(int a, int b)
{
    return a * b; // Multiplication
}

int division(int a, int b)
{
    return a / b; // Division
}

int modulo(int a, int b)
{
    return a % b; // Modulus
}

// main function
int main()
{
    int num, fNum, sNum;
    do
    {
        cout << endl
             << "Calculator.." << endl << endl;
        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for Exit.." << endl;
        cout << "Enter Any digit For Calculating.. : ";
        cin >> num;

        cout << endl;
        switch (num)
        {
        case 1:
            // Addition
            cout << "Enter First Number : ";
            cin >> fNum;
            cout << "Enter Second Number : ";
            cin >> sNum;
            cout << fNum << " + " << sNum << " = " << addition(fNum, sNum) << endl;
            break;
        case 2:
            // subtraction
            cout << "Enter First Number : ";
            cin >> fNum;
            cout << "Enter Second Number : ";
            cin >> sNum;
            cout << fNum << " - " << sNum << " = " << subtraction(fNum, sNum) << endl;
            break;
        case 3:
            // multiplication
            cout << "Enter First Number : ";
            cin >> fNum;
            cout << "Enter Second Number : ";
            cin >> sNum;
            cout << fNum << " * " << sNum << " = " << multiply(fNum, sNum) << endl;
            break;
        case 4:
            // Division
            cout << "Enter First Number : ";
            cin >> fNum;
            cout << "Enter Second Number : ";
            cin >> sNum;
            cout << fNum << " / " << sNum << " = " << division(fNum, sNum) << endl;
            break;
        case 5:
            // modulus
            cout << "Enter First Number : ";
            cin >> fNum;
            cout << "Enter Second Number : ";
            cin >> sNum;
            cout << fNum << " % " << sNum << " = " << modulo(fNum, sNum) << endl;
            break;
        case 0:
            cout << endl
                 << "You're Exit from calculator..." << endl;
            break;
        default:
            cout << "Invalid choice of Number so please choice Number Again...." << endl;
        }
    } while (num != 0);

    return 0;
}