#include<iostream>
using namespace std;

main()
{
    // 1 0 1 0 1
    //   2 3 4 5
    //     1 0 1
    //       4 5
    //         1

    for(int i = 1; i <= 5; i++)
    {
        for(int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for(int j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                cout << j;
            }
            else
            {
                cout << j % 2;
            }    
        }
        cout << endl;
    }
}