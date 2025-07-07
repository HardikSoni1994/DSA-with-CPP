// Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book

#include<iostream>
using namespace std;

main()
{
    int a,b,c;
    cout<<"Enter the first number :";
    cin >> a;
    cout<<"Enter the second number :";
    cin >> b;
    cout<<"Enter the third number :";
    cin >> c;

    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is minimum number.";
        }
        else
        {
            cout << c <<" is minimum number.";
        }
        
    }
    else
    {
        if (b < c)
        {
            cout << b <<" is minimum number.";
        }
        else
        {
            cout << c <<" is minimum number.";
        }
        
    }
    
}