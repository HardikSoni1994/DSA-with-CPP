// Write a Program to find the maximum number from the given 3 numbers using the ternary operator

#include<iostream>
using namespace std;

main()
{
    int a,b,c;
    cout <<" Enter the Value of first number :" << endl;
    cin >> a;
    cout <<" Enter the Value of Second number :" << endl;
    cin >> b;
    cout <<" Enter the Value of Third number :" << endl;
    cin >> c;

    (a > b)
        ? (a > c) ? cout << a <<" is max..."
        : cout << c <<" is max..."
        : (b > c) ? cout << b <<" is max..."
                : cout << c <<" is max...";
}