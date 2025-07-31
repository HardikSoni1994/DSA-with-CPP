#include<iostream>
using namespace std;

main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int s = 5; s <= i; s--)
        {
            cout << " ";
        }
        for(int j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}