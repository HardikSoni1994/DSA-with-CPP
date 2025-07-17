#include<iostream>
using namespace std;

main()
{
    int n;
    int rev = 0;
    int rem;
    cout <<"Enter any number :"; 
    cin >> n;
    int original = n;

    while (n != 0)
    {
        rem = n % 10; 
        rev = rev * 10 + rem; 
        n/= 10; 
    }
    
    if (original == rev)
    {
        cout << rev << " is palindrome number.";
    }
    else
    {
        cout << rev << " is not palindrome number.";
    }
}