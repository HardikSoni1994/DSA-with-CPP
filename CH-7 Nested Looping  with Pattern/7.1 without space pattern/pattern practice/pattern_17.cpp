#include<iostream>
using namespace std;

main()
{
    // 1
    // 1 0
    // 1 0 1
    // 1 0 1 0
    // 1 0 1 0 1
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
           
            cout << j % 2;

        }
        cout << endl;
    }
}