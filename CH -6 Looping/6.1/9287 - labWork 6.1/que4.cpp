//  Write a Program to print odd numbers from N to 1 using a while loop.

#include<iostream>
using namespace std;

main()
{
    int i = 1;
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    while (n >= i)
    {
        cout << n <<"\t";
        n -= 2;
    }
    
}