#include<iostream>
using namespace std;

main()
{
    // -
    // | -
    // - | -
    // | - | -
    // - | - | - 

    for(int i = 5; i >= 1; i--)
    {
        for(int j = i; j <= 5; j++)
        {
            (j % 2 == 0)
            ? cout << " | "
            : cout << " - ";
        }
        cout << endl;
    }
}