#include <iostream>
#include <string.h>
using namespace std;

class Car
{
private:
    int id;
    char name[20];
    char color[20];
    float price;

public:
    // setter
    void setCarData()
    {
        cout << endl;
        cout << "Enter your car ID :";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter your car Name : ";
        gets(this->name);
        fflush(stdin);
        cout << "Enter your car Color : ";
        gets(this->color);
        fflush(stdin);
        cout << "Enter your car Price : ";
        cin >> this->price;
    }

    // getter
    void getCarData()
    {
        cout << endl;
        cout << "Enter your Car ID\t: " << this->id << endl;
        cout << "Enter your Car Name\t: " << this->name << endl;
        cout << "Enter your Car Color\t: " << this->color << endl;
        cout << "Enter your Car Price\t: " << this->price << endl;
    }

    // sum of Car Price
    void sumOfcarPrice(int size, Car cars[])
    {
        float sum = 0;
        for (int i = 0; i < size; i++)
        {    
            sum += cars[i].price;
        }
        cout << endl << "Cars Total Price : " << sum << endl;
    }
};