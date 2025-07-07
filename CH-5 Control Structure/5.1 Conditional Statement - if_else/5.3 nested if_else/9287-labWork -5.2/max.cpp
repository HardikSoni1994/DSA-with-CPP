// Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book

#include<iostream>
using namespace std;

main()
{
    int a, b, c, d;
    cout <<" Enter the first number: ";
    cin >> a;
    cout <<" Enter the second number: ";
    cin >> b;
    cout <<" Enter the third number: ";
    cin >> c;
    cout <<" Enter the fourth number: ";
    cin >> d;
    
    if (a == b && a == c && b == c && a == d)
    {
        cout <<" All numbers are equal";
    }
    else
    {
        if (a == b || a == c || b == c || c == d)
        {
            cout <<" both numbers are equal";
        }
        else{
            if (a > b)
            {
                if (a > c)
                {
                    if (a > d)
                    {
                        cout << a <<" is maximum number...";
                    }
                    else
                    {
                        cout << d <<" is maximum number...";
                    }
                }
                else
                {
                    if (c > d)
                    {
                        cout << c << " is maximum number...";
                    }
                    else
                    {
                        cout << d <<" is maximum number...";
                    }
                    
                }
                
            }
            else
            {
                if (b > c)
                {
                    if (b > d)
                    {
                        cout << b <<" is maximum number...";
                    }
                    else
                    {
                        cout << d <<" is maximum number...";
                    }
                    
                }
                else
                {
                    if (c > d)
                    {
                        cout << c <<" is maximum number...";
                    }
                    else
                    {
                        cout << d << " is maximum number...";
                    }
                    
                }
                
            }
            
        }
    }
}