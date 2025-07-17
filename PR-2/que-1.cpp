// Write a program to print the following series for n terms: 1 2 4 7 11 16 22 … Each term is the previous term plus an increment that increases by 1 each time.

#include<iostream>
using namespace std;

main()
{
    int a = 1;
    int b = 1;
    int i;
    for(i = 1; i <= 7; i++)
    {
        cout << a << "\t";
        a = a + b;
        b++;
    }
}