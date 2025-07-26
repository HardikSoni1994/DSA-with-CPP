#include<iostream>
using namespace std;

main ()
{
    // Explicitly convert the integer to a float & float to integer, it does not convert direct to Char.
    /*float PI = 3.14;
    int n = PI;
    
    cout << PI << endl;
    cout << n << endl;*/

    //Float -> Int
    int a = 10, b = 4;

    cout << (float)a/b << endl; // 2.5 it was a forcefully converted to float
    
    float number = 89.12;
    int num = (int)number;

    char ch = num;
    cout << ch;
}