#include<iostream>
using namespace std;

main()
{
    // 1 0 1 0 1
    // 0 1 0 1
    // 1 0 1
    // 0 1
    // 1

    for(int i = 5; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            cout << j % 2;
        }
        cout << endl;
    }
}