#include<iostream>
using namespace std;

main()
{
    // 5
    // 4 4
    // 3 3 3
    // 2 2 2 2
    // 1 1 1 1 1

for(int i = 5; i >= 1; i--)
    {
        for(int j = 5; j >= i; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}