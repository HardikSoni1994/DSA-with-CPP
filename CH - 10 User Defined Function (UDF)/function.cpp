#include<iostream>
using namespace std;

// input Int Value
int inputInt()
{
    int n;
    cin >> n;
    return n;
}

// TSRN (Array Input)
void arrayInput(int n, int a[])
{
    cout << endl
         << endl
         << " Array Input " << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Enter a[" << i << "] : ";
        a[i] = inputInt(); // nasted function
    }
}
// Array Output
void arrauOutput(int n, int a[])
{
    cout << endl
         << endl
         << " Array Output " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
// TSRS (Array Element Sum)
int arrayElementsSum(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        return n;
    }
}