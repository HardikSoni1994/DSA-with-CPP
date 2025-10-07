#include <iostream>
using namespace std;

// void input(int *n)
// {
//     cin >> *n;
// }

int main()
{
    int *n = new int();
    float *PI = new float();

    // *n = 50;

    cout << "Enter any number :";
    cin >> *n;
    // cout << "Enter PI Value   :";
    // cin >> *PI;

    cout << "Address : " << n << endl;
    cout << "Value   : " << *n << endl
         << endl;

    delete n; // dangling pointer

    cout << "Address : " << n << endl;
    cout << "Value   : " << *n << endl
         << endl;

    n = new int(78);

    cout << "Address : " << n << endl;
    cout << "Value   : " << *n << endl
         << endl;

    delete n; // dangling pointer

    cout << "Address : " << n << endl;
    cout << "Value   : " << *n << endl
         << endl;

    n = new int[3];

    n[0] = 10;
    n[1] = 20;
    n[2] = 30;

    cout << "Address : " << n << endl;
    cout << "Value   : " << *n << endl
         << endl;

    delete[] n;
    n = NULL;
    cout << "Address : " << n << endl;
    cout << "Value   : " << *n << endl
         << endl;
    // cout << "PI Address :" << PI << endl;
    // cout << "PI Value   :" << *PI << endl;
}