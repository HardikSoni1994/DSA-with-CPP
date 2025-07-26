#include<iostream>
using namespace std;

main()
{
    int a, b, c;
    cout <<"Enter a, b, c Value" << endl;
    cin >> a >> b >> c;

    (a < b)
    ?(a < c)? cout << a <<" is min..":cout << c <<" is min.."
    :(b < c)? cout << b <<" is min.." : cout << c <<" is min..";
}