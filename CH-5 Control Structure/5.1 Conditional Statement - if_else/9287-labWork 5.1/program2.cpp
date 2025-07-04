// Write a Program to find if a given number is neutral or not using a ladder if else

#include<iostream>
using namespace std;

main()
{
    int num;
    cout <<"Enter any number: ";
    cin >> num;

    if (num > 0)
    {
        cout <<"Your number is positive";
    }
    if(num == 0)
    {
        cout <<"Your number is neutral";
    }
    if (num < 0)
    {
        cout <<"Your number is negative";
    }
    
    
}