#include <iostream>
using namespace std;

// TNRN - (take nothing return nothing).
// global rea
void print();  // declaration in global area

int main()
{
    print();
    return 0;
}

void print()  // definition
{
    cout << "Hello TNRN Function ";
}