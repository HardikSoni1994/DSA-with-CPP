#include<iostream>
using namespace std;

main()
{
    /*int i;
    for (i = 1; i <= 10; i++)
    {
        cout << i <<"\t";
    }*/

    /*int i, j;
    for (i = 1, j = i; i <= 10; i++)
    {
        cout << i << j <<"\t";
    }*/

    // int i = 1, j = 1;
    // for(; i <= 5, j <= 3; i++)
    // {
    //     cout << i << j <<"\t"; 
    //     j++;
    // }

    int i, j;
    for (i = 1, j = 1; i <= 5, j <= 3;)
    {
        cout << i << j << endl;
        i++;
        j++;
    }
}
