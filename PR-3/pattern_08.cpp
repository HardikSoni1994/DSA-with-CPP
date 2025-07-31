#include<iostream>
using namespace std;

main()
{
    
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if ((i == 1 && (j >= 1 && j <= 6)) || (j == 1) || (i == 5 && (j >= 3 && j <= 6)) || (i == 6 && j == 6) || (i == 7 && j <= 6) || (i == 2 && j == 6))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}