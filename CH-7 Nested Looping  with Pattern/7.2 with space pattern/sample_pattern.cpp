#include<iostream>
using namespace std;

main()
{
    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
    // 1 2 3 4 5

    for(int i = 1; i <= 5; i++)
    {
        for(int s = 5; s > i; s--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}