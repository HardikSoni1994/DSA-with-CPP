#include <iostream>
using namespace std;

// Base Class
class Operation
{
public:
    Operation()
    {
        cout << "--- Arithmetic Operations using Method Overloading ---" << endl;
    }
};

// Derived Class
class Calculator : public Operation
{
public:
    // 2 arguments -> Division
    void calculate(int a, int b)
    {
     cout << "Division = " << (a / b) << endl;
    }

    // 3 arguments -> Subtraction
    void calculate(int a, int b, int c)
    {
        cout << "Subtraction = " << (a - b - c) << endl;
    }

    // 4 arguments -> Multiplication
    void calculate(int a, int b, int c, int d)
    {
        cout << "Multiplication = " << (a * b * c * d) << endl;
    }

    // 5 arguments -> Addition
    void calculate(int a, int b, int c, int d, int e)
    {
        cout << "Addition = " << (a + b + c + d + e) << endl;
    }
};

int main()
{
    Calculator calc;

    // Different operations
    calc.calculate(20, 5);                  // Division
    calc.calculate(30, 10, 5);              // Subtraction
    calc.calculate(2, 3, 4, 5);             // Multiplication
    calc.calculate(10, 20, 30, 40, 50);     // Addition
}
