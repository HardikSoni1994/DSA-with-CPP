#include <iostream>
using namespace std;

main()
{
    // value input by user
    int first;
    cout << "Enter first number : ";
    cin >> first;
    int second;
    cout << "Enter second number : ";
    cin >> second;

    // ternary operator to find largest or maximum number.
    (first > second) ? cout << endl
                            << "First number is largest.. " << first
                     : cout << endl
                            << "Second number is largest.. " << second;
}