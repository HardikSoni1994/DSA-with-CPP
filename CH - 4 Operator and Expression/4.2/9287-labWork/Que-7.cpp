// Write a Program to find the formula's answer (x+y+z)^2

#include<iostream>
using namespace std;

main()
{
    // (x+y+z)^2
    int x,y,z, n;
    cout <<"Enter value of X:-\t";
    cin >> x;
    cout <<endl;
    cout <<"Enter value of y:-\t";
    cin >> y;
    cout <<endl;
    cout <<"Enter value of z:-\t";
    cin >> z;
    cout <<endl;
    n = (x*x) + (y*y) + (z*z) + 2*(x*y) + 2*(x*z) + 2*(y*z);
    cout <<endl <<"(x+y+z)^3 = " << n;
}