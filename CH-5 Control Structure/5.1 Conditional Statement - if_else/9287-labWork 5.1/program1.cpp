// Write a Program to find the minimum number from the given 2 numbers using if else

#include<iostream>
using namespace std;

main()
{
    int fnum, snum;

    cout <<"Enter the first number: ";
    cin >> fnum;

    cout <<"Enter the second number: ";
    cin >> snum;

    if (fnum < snum)
    {
        cout <<"The minimum number is: " << fnum;
    }
    else {
        cout <<"The minimum number is: " << snum;
    }
}