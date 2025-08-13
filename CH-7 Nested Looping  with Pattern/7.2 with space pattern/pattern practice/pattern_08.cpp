#include<iostream>
using namespace std;

main()
{
    // 1 2 3 4 5
    //   2 3 4 5
    //     3 4 5
    //       4 5
    //         5

    for(int i = 1; i <= 5; i++)
    {
        for(int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for(int j = i; j <= 5; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}