#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char psw[20];

    cout << " Enter your Password : ";
    cin >> psw;

    cout << " Password : " << psw << endl;
    int len = strlen(psw);
    cout << " String length : " << len << endl;
    int upr, lwr, digit, symbol = 0;

    if (len >= 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (psw[i] >= 'A' && psw[i] <= 'Z')
            {
                upr++;
            }
            else if(psw[i] >= 'a' && psw[i] <= 'z')
            {
                lwr++;
            }
            else if (psw[i] >= 48 && psw[i] <= 57)
            {
                digit++;
            }
            else
            {
                symbol++;
            }
            
            
            
        }
        // cout << " Total uppercase : " << upr << endl;
        // cout << " Total LowerCase : " << lwr << endl;
        // cout << " Total Digit : " << digit << endl;
        // cout << " Total Symbol : " << symbol << endl;

        if (upr >= 1 && lwr >= 1 && digit >= 1 && symbol >= 1)
        {
            cout << " Password is strong....";
        }
        else
        {
            cout << " Password is not strong...";
        }
        
        
        
    }
    else
    {
        cout << endl
             << " Password is not strong : ";
    }
}