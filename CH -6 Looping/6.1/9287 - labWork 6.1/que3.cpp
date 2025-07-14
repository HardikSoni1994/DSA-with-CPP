// Write a Program to print 1 to N using a while loop.

#include<iostream>
using namespace std;

main()
{
    int a = 1;
    int n;
    cout <<"Enter any Number :";
    cin >> n;

    while (a <= n)
    {
        cout << a << "\t";
        a++;
    }
}