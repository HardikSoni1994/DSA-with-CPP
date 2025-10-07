#include <iostream>
using namespace std;

// function Base Template
template <typename T>
T addition(T a, T b)
{
    return a + b;
}

template <typename T>
T input(T n)
{
    cin >> n;
    return n;
}

template <typename T1, typename T2, typename T3>
void demo(T1 a, T2 b, T3 c)
{
    cout << "A\t : " << a << endl;
    cout << "B\t : " << b << endl;
    cout << "C\t : " << c << endl;
}

int main()
{
    // addition<int>(45, 10)
    cout << addition<int>(45, 10) << endl;
    // addition<double>(50.47, 10.87)
    cout << addition<double>(50.47, 10.87) << endl
         << endl;

    int a;
    float PI;
    char ch;

    cout << "Enter any number : ";
    a = input<int>(a);

    cout << "Enter PI value : ";
    PI = input<float>(PI);

    cout << "Enter character value : ";
    ch = input<char>(ch);

    cout << a << endl
         << PI << endl
         << ch << endl
         << endl;

    demo(10, 3.14, 'R');

    return 0;
}