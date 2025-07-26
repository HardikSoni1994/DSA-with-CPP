#include<iostream>
using namespace std;

main()
{
    // 25 26 27 28 29
    // 26 27 28 29
    // 27 28 29
    // 28 29
    // 29

    for(int i = 25; i <= 29; i++)
    {
        for(int j = i; j <= 29; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}