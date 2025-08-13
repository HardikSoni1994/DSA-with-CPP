#include<iostream>
using namespace std;

main()
{
    // 5 4 3 2 1
    //   4 3 2 1
    //     3 2 1
    //       2 1
    //         1


    for(int i = 5; i >= 1; i--)
    {
        for(int s = 5; s < i; s--)
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