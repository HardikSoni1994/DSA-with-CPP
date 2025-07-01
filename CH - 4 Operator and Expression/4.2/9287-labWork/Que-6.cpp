// Write a Program to find the formula's answer (x-y)^3

#include<iostream>
using namespace std;
main()
{
    // (x-y)^3
    int x, y, n;
    cout << "Enter value of X:-\t";
    cin >> x;
    cout << "Enter value of Y:-\t";
    cin >> y;
    n = (x*x) - (3*x*y) - (y*y);
    cout << endl << "(x-y)^3 = " << n;
}