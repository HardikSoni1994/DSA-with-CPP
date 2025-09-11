#include <iostream>
using namespace std;

// single / Simple Inheritance
// parent Class / Base Class
class X
{
protected:
    int a, b, c;
};

// Derived Class / Child class
class Y : public X
{
public:
    // Setter
    void setSumData()
    {
        cout << "Enter Value of A : ";
        cin >> a;
        cout << "Enter Value of B : ";
        cin >> b;
        cout << "Enter Value of C : ";
        cin >> c;
    }
    // Getter
    void getSumData()
    {
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << endl
             << "Cube of " << a << " = " << (a * a * a) << endl;
        cout << "Cube of " << b << " = " << (b * b * b) << endl;
        cout << "Cube of " << c << " = " << (c * c * c) << endl
             << endl;
        cout << "Sum of All Cubes : " << sum << endl;
    }
};