#include <iostream>
using namespace std;

// 1. Single / Simple Inheritance

// parent class
class Animal
{
private:
    char name[20];
    int age;

public:
    Animal()
    {
        cout << "Welcome to Zoo" << endl;
    }
    // Setter
    void setAnimalData()
    {
        cout << "Enter Animal Name : ";
        cin >> this->name;
        cout << "Enter Animal Age : ";
        cin >> this->age;
    }
    // Getter
    void getAnimalData()
    {
        cout << "Enter Animal Name : " << this->name << endl;
        cout << "Enter Animal Age : " << this->age << endl;
    }
};
// child class
class Dog : public Animal
{
    // Animal()
    // setAnimalData()
    // getAnimalData()

    public:
        Dog()
        {
            cout << "Thanks for Visits..." << endl;
        }
    void sound()
    {
        cout << "Bhow Bhow...." << endl;
    }
};