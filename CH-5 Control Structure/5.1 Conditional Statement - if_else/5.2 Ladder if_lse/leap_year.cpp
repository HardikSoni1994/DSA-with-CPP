#include<iostream>
using namespace std;

main()
{
    int year;
    cout <<"Enter a year: "; // 2024
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // divided by 4, but not by 100, or divided by 400
    {
        cout <<"The year is a leap year." << year << endl;
    }
    else
    {
        cout <<"The year is not a leap year." << year << endl;
    }
}