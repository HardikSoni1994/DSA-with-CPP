//  Write a Program to find the formula's answer (x+y)^2

#include<iostream>
using namespace std;
main()
{
    // (x+y)^2
    int x,y, n;
    cout << "Enter value of x :\t";
    cin >> x;
    cout <<endl << "Enter value of y :\t";
    cin >> y;
    n = (x*x)+(2*x*y)+(y*y);
    cout << endl << "(x+y)^2=" << n;
}