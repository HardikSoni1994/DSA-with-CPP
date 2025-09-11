#include <iostream>
using namespace std;

// Base class A
class A
{
protected:
    int a;
public:
    A()   // default constructor
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
};

// Base class B
class B
{
protected:
    int b;
public:
    B()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
};

// Class C inherits A and B  (Multiple Inheritance)
class C : public A, public B
{
protected:
    int c;
public:
    C()
    {
        cout << "Enter value of c: ";
        cin >> c;
    }
};

// Class D inherits C (Multilevel) => Hybrid
class D : public C
{
    int d;
public:
    D()
    {
        cout << "Enter value of d: ";
        cin >> d;
    }

    void displaySum()
    {
        int sum = a + b + c + d;
        cout << endl << "Numbers are: " << a << " + " << b << " + " << c << " + " << d;
        cout << endl << "Sum of all four numbers = " << sum << endl;
    }
};

int main()
{
    D obj;   // automatically all constructors will be called
    obj.displaySum();
}
