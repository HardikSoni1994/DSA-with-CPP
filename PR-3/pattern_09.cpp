#include <iostream>
using namespace std;
main()
{
    //           * 
    //         * * *
    //       * * * * *
    //     * * * * * * *
    //   * * * * * * * * *
    // * * * * * * * * * * *
    //   * * * * * * * * *
    //     * * * * * * *
    //       * * * * *
    //         * * *
    //           * 

    
    for (int i = 1; i <= 6; i++)
    {
        for (int s = 6; s > i; s--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int s = i; s < 6; s++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}