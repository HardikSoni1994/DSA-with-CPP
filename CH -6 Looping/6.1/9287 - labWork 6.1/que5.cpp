// Write a Program to print leap years between two given numbers using a while loop.

#include<iostream>
using namespace std;

main()
{
    int year;
    int n;
    cout << "Enter the first number: ";
    cin >> year;
    cout << "Enter the second number: ";
    cin >> n;

    while (year <= n)
    {
        if (year % 4 == 0)
        {
            cout << year <<"\t";
        }
        year++;
    }
    
}