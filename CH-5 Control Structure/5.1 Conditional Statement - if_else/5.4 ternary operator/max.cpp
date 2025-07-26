#include<iostream>
using namespace std;

main()
{
    int a, b, c;
    cout <<"Enter a b and c value :";
    cin >> a;
    cin >> b;
    cin >> c;

    (a > b)
    ?(a > c)? cout << a <<" is max.." : cout << c <<" is max.."
    :(b > c)?cout << b <<" is max..": cout << c <<" is max..";
}