#include<iostream>
using namespace std;

main()
{
    // 1
    // B A
    // 3 2 1
    // D C B A
    // 5 4 3 2 1

    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = i; j >= 1; j--)
        {
            if (i % 2 == 0)
            {
                char ch = j + 64;
                cout << ch;
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
}