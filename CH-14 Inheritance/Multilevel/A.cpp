#include <iostream>
using namespace std;

// parent class
class A
{
protected:
    int a;

public:
    // setter
    void setA()
    {
        cout << "Enter value of A : ";
        cin >> this->a;
    }
    // getter
    void getA()
    {
        cout << endl
             << "A\t: " << this->a << endl;
    }
};

// parent & child class
class B : public A
{
protected:
    int b;

public:
    // setter
    // setA()
    // getA()
    void setB()
    {
        cout << "Enter value of B : ";
        cin >> this->b;
    }
    // getter
    void getB()
    {
        cout << endl
             << "B\t: " << this->b << endl;
    }
};

// child class
class C : public B
{
private:
    int c;

public:
    // setter
    // setA();
    // getA();
    // setB();
    // getB();
    void setC()
    {
        cout << "Enter value of C : ";
        cin >> this->c;
    }
    // getter
    void getC()
    {
        cout << endl
             << "C\t: " << this->c << endl;
    }

    void sumAllClass()
    {
        cout << endl
             << a << " + " << b << " + " << c << " = " << a + b + c << endl;
    }
};