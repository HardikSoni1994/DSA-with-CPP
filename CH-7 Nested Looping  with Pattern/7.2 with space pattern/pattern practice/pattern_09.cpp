#include<iostream>
using namespace std;

main()
{
    // 5 4 3 2 1
    //   5 4 3 2
    //     5 4 3
    //       5 4
    //         5


    for(int i = 1; i <= 5; i++)
    {
        for(int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for(int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}