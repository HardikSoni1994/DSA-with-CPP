#include<iostream>
using namespace std;

main()
{
  /*A
    A B
    A B C
    A B C D
    A B C D E*/

    for(int i = 1; i <= 5; i++)
    {
        for(char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}