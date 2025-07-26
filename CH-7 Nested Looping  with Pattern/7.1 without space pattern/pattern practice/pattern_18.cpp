#include<iostream>
using namespace std;

main()
{
    // 0
    // 0 1
    // 0 1 0
    // 0 1 0 1
    // 0 1 0 1 0


    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            cout << j % 2;
        }
        cout << endl;
    }
}