#include <iostream>
using namespace std;
main()
{
    // 1 B 3 D 5
    // B B B B
    // 3 D 5
    // D D
    // 5

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {    
            char ch = j + 64;
            if (i % 2 == 0)
            {
                if (i % 2 == 0)
                {
                    char ch = i + 64;
                    cout << ch;
                }
                else
                {
                    cout << j;
                }    
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << ch;
                }
                else
                {
                    cout << j;
                }
            }
        }
        cout << endl;
}
}