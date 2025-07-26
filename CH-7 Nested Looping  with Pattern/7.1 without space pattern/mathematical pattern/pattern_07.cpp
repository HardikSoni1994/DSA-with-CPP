#include<iostream>
using namespace std;

main()
{
    // a B c D e
    // 2 c 4 e
    // c D e
    // 4 e
    // e

    for(int i = 1; i <= 5; i++)
    {
        for(int j = i; j <= 5; j++)
        {
         if (i % 2 == 0)
         {
            if (j % 2 == 0)
            {
                cout << j << " ";
            }
            else
            {
                char ch = j + 96;
                cout << ch << " ";
            }
         }
         else
         {
            if (j % 2 == 0)
            {
                char ch1 = j + 64;
                cout << ch1 << " ";
            }
            else
            {
                char ch2 = j + 96;
                cout << ch2 << " ";
            }
         }  
        }
        cout << endl;
    }
}