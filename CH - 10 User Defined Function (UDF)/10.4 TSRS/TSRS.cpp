#include <iostream>
using namespace std;

// TSRS: (Take Something Return Something)

int multi(int a, int b)
{
    return a * b;
}

int main()
{
    int ans = multi(10, 20);
    cout << " a * b = " << ans;
    return 0;
}