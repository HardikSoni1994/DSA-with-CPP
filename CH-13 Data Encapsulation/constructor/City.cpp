#include <iostream>
using namespace std;

class City
{
private:
    string cityName;
    int pincode;

public:
    // Default Constructor
    City()
    {
        cout << "Welcome To Surat City" << endl;
        // this->cityName = "Surat";
        // this->pincode = 395010;

        // getCityData();
    }

    // parametrized constructor
    City(string cityName, int pincode)
    {
        this->cityName = cityName;
        this->pincode = pincode;
    }

    City (City &obj)    // copy constructor
    {
        this->cityName = obj.cityName;
        this->pincode = obj.pincode;
    }

    void getCityData()
    {
        cout << endl;
        cout << "Enter your City Name : " << this->cityName << endl;
        cout << "Enter your City Name : " << this->pincode << endl;
    }
};

int main()
{
    City c1("surat", 395006);
    // City c2 = c1;    // shallow copy   1st way

   City c2(c1);  // Deep copy 2nd way
   City c3;

    c1.getCityData(); // shallow copy
    c2.getCityData();
}