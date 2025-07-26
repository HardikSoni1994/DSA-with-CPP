#include<iostream>
using namespace std;

main()
{
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    for(int i = 1; i <= 5; i++)
    {
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}