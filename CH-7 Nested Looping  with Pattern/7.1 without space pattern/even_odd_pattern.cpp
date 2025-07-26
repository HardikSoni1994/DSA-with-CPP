#include<iostream>
using namespace std;

main()
{
    // 1 1 1 1 1
    // 0 0 0 0
    // 1 1 1
    // 0 0
    // 1

    for(int i =1; i <= 5; i++)
    {
        for(int j = i; j <= 5; j++)
        {
            cout << i % 2;
        }
        cout << endl;
    }
}