#include<iostream>
using namespace std;

main()
{   
    // 4
    // 9 9
    // 16 16 16
    // 25 25 25 25
    // 36 36 36 36 36

    for(int i= 2; i <= 6; i++)
    {
        for(int j = 2; j <= i; j++)
        {
            cout << i * i << " ";
        }
        cout << endl;
    }
}