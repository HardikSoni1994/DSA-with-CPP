#include <iostream>
using namespace std;

// TSRN - (Take Something Return Nothing)

// addition
void addition (int, int, char); // decelaration

int main()
{
    int a, b;
    cout << " Enter a value : ";
    cin >> a;
    cout << " Enter b value : ";
    cin >> b;
    addition(a, b, 'K'); // argument passing.
}

void addition(int a, int b, char ch) // definition
{
    cout << a << " + " << b << " = " << a + b << endl;
    cout << "Character : " << ch << endl;
}