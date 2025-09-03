#include <iostream>
#include "car.cpp"

int main()
{  
    int size;

    cout << "Enter number of Cars : ";
    cin >> size;

    // Array of Object
    Car cars[size];

    for (int i = 0; i < size; i++)
    {
        cars[i].setCarData();
    }

    for (int i = 0; i < size; i++)
    {
        cars[i].getCarData();
    }
    cars[0].sumOfcarPrice(size, cars);
    
}