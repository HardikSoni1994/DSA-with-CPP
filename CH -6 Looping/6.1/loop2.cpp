#include<iostream>
using namespace std;

main()
{
    int a = 1;
    int n;
    cout <<" Enter any Number :";
    cin >> n;

    // while (a <= n)
    // {
    //     cout << a <<"\t";
    //     a+= 4;
    // }
    
    while (n >= a)
    {
        cout << n <<"\t";
        n--;
    }
    
}