#include <iostream>
using namespace std;

// Parent Class
class Shape
{
protected:
    int width, height;

public:
    // Default Constructor
    Shape()
    {
        cout << "Enter Width : ";
        cin >> width;
        cout << "Enter Height : ";
        cin >> height;
    }
};

// Derived Class of Triangle
class Triangle : public Shape
{
public:
    
    void getarea()
    {
        float result = 0.5 * width * height;
        cout << "Area of Triangle = " << result << endl;
    }
};

// Derived Class of Rectangle
class Rectangle : public Shape
{
public:

    void getarea()
    {
        int result = width * height;
        cout << "Area of Rectangle = " << result << endl;
    }
};

int main()
{
    cout << "--- Display Triangle Area ---" << endl;
    Triangle t;
    t.getarea();

    cout << "\n--- Display Rectangle Area ---" << endl;
    Rectangle r; 
    r.getarea();

}
