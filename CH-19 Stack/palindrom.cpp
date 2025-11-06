#include <iostream>
#include "binary.cpp"
using namespace std;

int main()
{
    Stack stack(5);

    string str;

    cout << "Enter any string : ";
    cin >> str;

    Stack stack(str.size());

    for (char ch : str)
    {
        stack.push(ch);
    }
    stack.display();
}