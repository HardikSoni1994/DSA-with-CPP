#include<iostream>
using namespace std;

main()
{
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 12 13 15

    int n = 1;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << n++;
        }
        cout << endl;
    }
}