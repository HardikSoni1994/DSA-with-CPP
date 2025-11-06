#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter any integer Value : ";
    cin >> num;

    (num % 2 == 0)
        ? cout << endl  << num << " is an Even Number. " << endl
        : cout << endl  << num << " is Odd Number. " << endl;
}