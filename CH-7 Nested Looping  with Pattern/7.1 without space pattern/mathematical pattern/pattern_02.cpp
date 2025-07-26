#include<iostream>
using namespace std;

main()
{
    // 1 B 1 D 1
    // B 1 D 1
    // 1 D 1
    // D 1
    // 1
    
    for(int i= 1; i <= 5; i++)
    {
        for(int j = i; j <= 5;  j++)
        {
            if (j % 2 == 0)
            {
                char ch = j + 64;
                cout << ch;
            }
            else{
                cout << "1";
            }   
        }
     cout << endl;
    }
}