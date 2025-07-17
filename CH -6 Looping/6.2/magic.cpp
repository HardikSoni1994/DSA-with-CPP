#include<iostream>
using namespace std;

main()
{
    int n;
    int sum = 0;
    int multiple = 1;
    int original;
    int rem;
    cout <<"Enter any number :";
    cin >> n;
    original = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum +rem;
        multiple = multiple * rem;
        n/= 10;
    }
    if (sum  == multiple)
    {
        cout << original <<" is a magic number.";
    }
    else
    {
        cout << original <<" is not a magic number.";
    }
}