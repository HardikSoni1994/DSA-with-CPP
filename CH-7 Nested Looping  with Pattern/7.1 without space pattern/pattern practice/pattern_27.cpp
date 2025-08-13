// 1 3 5 7 9
// 3 5 7 9
// 5 7 9
// 7 9
// 9

#include<iostream>
using namespace std;

main()
{
    for(int i = 9; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    cout << j;
                }
                
            }
        }
        cout << endl;
    }
}