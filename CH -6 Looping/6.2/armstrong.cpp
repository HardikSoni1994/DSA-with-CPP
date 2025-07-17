#include<iostream>
using namespace std;

main()
{
    int n;
    int rem = 0;
    int rev = 0;

    cout <<"Enter any number :"; // 370
    cin >> n;
    int original = n;

    while (n != 0)
    {
        rem = n % 10; // 0
        int num = rem * rem * rem; // 0 * 0 * 0 = 0
        rev = rev + num;
        n/= 10;
    }
    if (original == rev)
    {
        cout << rev <<" is an Armstrong number.";
    }
    else
    {
        cout << rev <<" is not an Armstrong number.";
    }
}