#include<iostream>
using namespace std;

main()
{
    int fnum, snum;
    cout << "Enter first number: ";
    cin >> fnum;

    cout <<"Enter second number: ";
    cin >> snum;

    if (fnum > snum)
    {
        cout <<"The maximum number is :" << fnum << endl;
    }
    else
    {
        cout <<"The maximum number is :" << snum << endl;
    }
    
}