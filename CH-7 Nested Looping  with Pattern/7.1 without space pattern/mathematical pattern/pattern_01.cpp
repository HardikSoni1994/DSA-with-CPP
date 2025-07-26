#include<iostream>
using namespace std;

main()
{
    // 100 90 80 70 60
    //   9  8  7  6
    //  80 70 60
    //   7  6
    //  60

    for(int i = 10; i >= 6; i--)
    {
        for(int j = i; j >= 6; j--)
        {
            if (i % 2 == 0)
            {
                cout << j * 10 << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}