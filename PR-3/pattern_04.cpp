#include<iostream>
using namespace std;

main()
{
    // 1 0 1 0 1
    //   1 0 1 0
    //     1 0 1
    //       1 0
    //         1

   for(int i = 5; i >= 1; i--)
   {
    for(int s = 5; s > i; s--)
    {
        cout << " ";
    }
    for(int j= 1; j <= i; j++)
        {
           if (j % 2 == 0)
           {
            cout << "0";
           }
           else
           {
            cout << "1";
           }
        }
    cout << endl;
   }
}