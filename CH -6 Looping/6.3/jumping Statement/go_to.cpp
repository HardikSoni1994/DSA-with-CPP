#include<iostream>
using namespace std;

main()
{
    // char ch = 'A';
    // label:
    // if (ch <= 'P')
    // {
    //     cout << ch << endl;
    //     ch++;
    //     goto label;
    // }
    // else{
    //     cout << ch << " is greater than P" << endl;
    // } 

    cout << "Hello, World!" << endl;

    goto skip;
    cout << " world" << endl;

    skip:
    cout << " Hello, " << endl;
}