#include<iostream>
using namespace std;

main()
{
    // 1-D Array

    int array[50] = {10, 20, 30, 40, 50};

    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;
    // array[4] = 50;
    array[41] = 70;

    for(int i = 0; i < 50; i++)
    {
        cout << array[i] << endl;
    }
    
   

    // int array[] = {10, 20, 30, 40, 50};
    // array[8] = 90;
    
    // cout << array[8]; // 20
    // cout << array[6];

}