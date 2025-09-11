#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    // setter
    void setA()
    {
        cout << "Enter Value of A : ";
        cin >> a;
    }

    void getA()
    {
        cout << endl
             << "A\t : " << this->a << endl;
    }
};

class B : public A
{
protected:
    int b;

public:
    // setter
    void setB()
    {
        cout << "Enter Value of B : ";
        cin >> b;
    }

    void getB()
    {
        cout << endl
             << "B\t : " << this->b << endl;
    }
};

class C : public A
{
protected:
    int c;

public:
    // setter
    void setC()
    {
        cout << "Enter Value of C : ";
        cin >> c;
    }

    void getC()
    {
        cout << endl
             << "C\t : " << this->c << endl;
    }
};

class D : public B, public C
{
protected:
    int d;

public:
    // setter
    void setD()
    {
        cout << "Enter Value of D : ";
        cin >> d;
    }

    void getD()
    {
        cout << endl
             << "D\t : " << this->d << endl;
    }
    // sum
    void sum()
    {
        cout << "Sum : " << B::a + b + c + d;
    }
};

int main()
{
    D d1;

    d1.B::setA();
    d1.setB();
    d1.setC();
    d1.setD();

    d1.B::getA();
    d1.getB();
    d1.getC();
    d1.getD();

    d1.sum();
}