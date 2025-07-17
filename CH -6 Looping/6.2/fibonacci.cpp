#include<iostream>
using namespace std;

main()
{
    int n;
    cout <<" Enter any Number :";
    cin >> n;

    int a = 1, b = 2, i = 1;
    int c;

    // cout << a << b;
    cout <<" Fibonacci Series up to "<< n <<" terms are :"<< endl;

    while (i <= n)
    {
        int c = a + b;
        cout << c;
        a = b;
        b = c;
        i++;
    }
}