#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number :";
    cin >> n;

    int a = 1;
    int sum = 0;
    while (a <= n)
    {
        sum = sum + a;
        a++;
    }
    cout <<"sum = " << sum << endl;
}