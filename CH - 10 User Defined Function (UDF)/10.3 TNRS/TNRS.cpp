#include<iostream>
using namespace std;

// TNRS: (Take Nothing Return Something)

int addition()
{
    int a, b;
    cout << " Enter First number : ";
    cin >> a;
    cout << " Enter second number : ";
    cin >> b;

    return a + b;
}

int inputInt()
{
    int n;
    cin >> n;

    return n;
}

int main()
{
    // int ans = addition();
    cout << " Sum = " << addition() << endl;

    int age;
    cout << "Enter Your Age :";
    age = inputInt();

    cout << " Age : " << age;
    return 0;
}