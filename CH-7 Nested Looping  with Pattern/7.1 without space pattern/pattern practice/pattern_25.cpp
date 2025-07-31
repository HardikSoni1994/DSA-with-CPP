// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include<iostream>
using namespace std;

main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}