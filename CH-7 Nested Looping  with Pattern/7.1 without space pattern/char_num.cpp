#include<iostream>
using namespace std;

main()
{   
    // A 2 C 4 E
    // 2 C 4 E
    // C 4 E
    // 4 E
    // E

    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = i; j <= 5; j++)
        {
            char ch = j + 64;
            if (j % 2 == 0)
            {
                cout << j;
            }
            else{
                cout << ch;
            }
        }
        cout << endl;
    }
}