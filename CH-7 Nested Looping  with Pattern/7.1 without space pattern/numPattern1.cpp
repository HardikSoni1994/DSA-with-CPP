#include<iostream>
using namespace std;

main()
{
    //without space pattern 1st pattern

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4 
    // 1 2 3 4 5

   for(int i = 1; i <= 5; i++)
   {
    for(int j = 1; j <= i; j++)
    {
        cout << j;
    }
    cout << endl;
   }
}