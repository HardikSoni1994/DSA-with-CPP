#include<iostream>
using namespace std;

main()
{
    // 1
    // 2 9
    // 3 8 10
    // 4 7 11 14
    // 5 6 12 13 15

    int n = 1;
    for(int i = 1; i <= 15; i++)
    {
        for(int j = 5; j <= i; j++)
        {
            cout << n++;
        }
        cout << endl;
    }
}