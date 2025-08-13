#include<iostream>
using namespace std;

main()
{
    // for(int i = 1; i <= 7; i++)
    // {
    //     if (i == 1 || i == 4)
    //     {
    //         cout << " * * * * * " << endl;
    //     }
    //     else
    //     {
    //         cout << " *       * " << endl;
    //     }
    // }

    for(int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3 || j == 1 || j == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}