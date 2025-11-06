#include <iostream>
using namespace std;

main()
{
    // Int -> Char //implicit
    int a = 97;

    char ch = a;

    cout << a << endl;          // 97
    cout << ch << endl;        // a

    //Char -> Int // implicit
    char b = 'H';
    int n = b;

    cout << n << endl;
}