#include <iostream>
using namespace std;

// Parent Class
class Number
{
protected:
    int n;

public:
    // Default Constructor
    Number()
    {
        cout << endl
             << "Enter a number : ";
        cin >> n;
    }
};

// Derived Class 1 of Square
class Square : public Number
{
public:
    void getSquare()
    {
        cout << "Square of " << n << " = " << (n * n) << endl;
    }
};

// Derived Class of Cube
class Cube : public Number
{
public:
    void getCube()
    {
        cout << "Cube of " << n << " = " << (n * n * n) << endl;
    }
};

int main()
{
    cout << "--- Display Square Calculation ---" << endl;
    Square s;
    s.getSquare();

    cout << "\n--- Display Cube Calculation ---" << endl;
    Cube c;
    c.getCube();
}
