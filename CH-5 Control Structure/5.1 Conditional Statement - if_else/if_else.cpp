#include <iostream>
using namespace std;

main()
{
    // if ("")
    // {
    //     /* code to be executed if the condition is true */
    // }
    // else
    // {
    //     /* code to be executed if the condition is false */
    // }

    /*int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout <<"You can do vote..!";
    }
    else
    {
        cout <<"You can not do vote..!";
    }*/

    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << " is a upperCase.";
    }
    else
    {

        cout << " is a lowerCase.";
    }
}