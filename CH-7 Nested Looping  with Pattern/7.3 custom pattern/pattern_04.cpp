#include<iostream>
using namespace std;

main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 5; j >= i; j--)
        {
            cout << j;
        }
        for(int s = 1; s < i; s++)
        {
            cout << "  ";
        }
        for(int j = i; j <= 5; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}