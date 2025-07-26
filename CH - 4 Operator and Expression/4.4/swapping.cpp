#include<iostream>
using namespace std;

main()
{
    int a, b;

    cout <<"Enter first value:\t";
    cin >> a; // a = 10
    cout <<"Enter Second value:\t";
    cin >> b; // b = 20

    cout << endl << "A\t:" << a << endl << "B\t:" << b << endl;

    // you can do swapping through third variable.

    // int c = a;  // c = 10
    // a = b;      // a = 20
    // b = c;      // b = 10

    // without third variable do swapping (+ -)

    //    a = a + b; // 10 + 20 = 30 = a
    //    b = a - b; // 30 - 20 = 10 = b
    //    a = a - b; // 30 - 10 = 20 = a

    // without third variable do swapping (* /)

    a = a * b; // 10 * 20 = 200 = a // 100 * 200 = 20000 = a
    b = a / b; // 200 / 20 = 10 = b // 20000 / 200 = 100 = b
    a = a / b; // 200 / 10 = 20 = a // 20000 / 100 = 200 = a
    cout << endl <<"A\t:" << a << endl <<"B\t:" << b << endl;
}