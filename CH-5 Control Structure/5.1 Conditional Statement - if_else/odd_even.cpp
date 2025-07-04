#include<iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter any Number:";
    cin >> num;

    if (num % 2 == 0) // using % operator to find remainder
    {
        cout << num << " is Even Number..!"; // if remainder is 0 then it is even number
    }
    else
    {
        cout << num << " is odd Number..!"; // if remainder is not 0 then it is odd number
    }

    // do without using % operator

    if ((num / 2) * 2 == num) // if number is divisible by 2 then it is even number
    {
        cout << num << " is Even Number..!"; // if remainder is 0 then it is even number
    }
    else
    {
        cout << num << " is odd Number..!"; // if remainder is not 0 then it is odd number
    }
}