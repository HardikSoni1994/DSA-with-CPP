#include <iostream>
using namespace std;

main() 
{   
    // 1 3 5 7 9
    // 3 5 7 9
    // 5 7 9
    // 7 9
    // 9
    for(int i = 1; i <= 9; i += 2)
    {
        for(int j = i; j <= 9; j++)
        {
            if(j % 2 == 1) 
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
