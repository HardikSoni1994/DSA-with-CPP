#include<iostream>
using namespace std;

main()
{
    int n;
    int rem;
    int rev = 0;

    cout << "Enter any number :";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "Reverse of the number is :" << rev;
}