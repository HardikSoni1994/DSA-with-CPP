#include <iostream>
using namespace std;

// Base Class RBI
class RBI
{
protected:
    float rate;   // common attribute
};

// Derived Class SBI
class SBI : public RBI
{
public:
    SBI()
    {
        rate = 6.5;   // SBI ka rate
    }

    void getROI()
    {
        cout << "SBI Rate of Interest = " << rate << "%" << endl;
    }
};

// Derived Class BOB
class BOB : public RBI
{
public:
    BOB()
    {
        rate = 7.0;   // BOB ka rate
    }

    void getROI()
    {
        cout << "BOB Rate of Interest = " << rate << "%" << endl;
    }
};

// Derived Class ICICI
class ICICI : public RBI
{
public:
    ICICI()
    {
        rate = 7.5;   // ICICI ka rate
    }

    void getROI()
    {
        cout << "ICICI Rate of Interest = " << rate << "%" << endl;
    }
};

int main()
{
    SBI s;
    BOB b;
    ICICI i;

    cout << "\n--- Rate of Interest of Different Banks ---" << endl;
    s.getROI();
    b.getROI();
    i.getROI();
}
