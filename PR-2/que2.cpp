/*Write a program to check whether a number is a Disarium Number or not.
A Disarium number is a number in which the sum of its digits powered with their respective positions is equal to the number itself.*/

#include<iostream>
using namespace std;

main()
{
    int n, sum, rem = 0, original;
    cout <<" Enter any number :";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        sum = rem + (rem * rem * rem);
        n/= 10;
    }
    if (n == original)
    {
        cout << " is a Disarium Number";
    }
    else{
        cout << " is not a Disarium Number";
    }
}