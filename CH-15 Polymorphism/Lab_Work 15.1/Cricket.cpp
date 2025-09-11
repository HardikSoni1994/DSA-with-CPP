#include <iostream>
using namespace std;

// Base class
class Cricket
{
public:
    void getTotalOvers()
    {
        cout << "Cricket match overs vary by format." << endl;
    }
};

// Derived class 1
class T20Match : public Cricket
{
public:
    void getTotalOvers()   // overriding base method
    {
        cout << "T20 Match has 20 overs per innings." << endl;
    }
};

// Derived class 2
class TestMatch : public Cricket
{
public:
    void getTotalOvers()   // overriding base method
    {
        cout << "Test Match has 90 overs per day (unlimited innings overs)." << endl;
    }
};

int main()
{
    cout << "--- Method Overriding Example (Without Pointer & Virtual) ---" << endl;

    Cricket c;    // Base object
    T20Match t20; // Derived object
    TestMatch test;

    c.getTotalOvers();      // Base class version
    t20.getTotalOvers();    // T20Match version
    test.getTotalOvers();   // TestMatch version

    return 0;
}
