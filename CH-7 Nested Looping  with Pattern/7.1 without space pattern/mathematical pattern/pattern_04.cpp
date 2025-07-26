#include<iostream>
using namespace  std;

main()
{
    // E
    // 50 D
    // E  D C
    // 50 D 30 B
    // E  D C  B  A

    for(int i = 5; i >= 1; i--)
    {
        for(int j = 5; j >= i; j--)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    char ch1 = j + 64;
                    cout << ch1 << "  "; 
                }
                else
                {
                    cout << j * 10 << " ";
                }
            }
            else
            {
                char ch = j + 64;
                cout << ch << "  ";
            }
        }
        cout << endl;
    }
}