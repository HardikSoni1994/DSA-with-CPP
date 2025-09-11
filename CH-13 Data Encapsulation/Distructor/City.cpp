#include <iostream>
using namespace std;


class City
{
    public:
    string cityName;
    // default constructor

    City()
    {
        cout << "Hiiii" << endl;
    }

    void setter()
    {
        cout << "enter city :";
        cin >> (cityName);
    }

    void getter()
     {
            cout << "Cityname : " << this->cityName;
        }
    // destructor
    ~City()
    {
        cout << "HEllo";
    }
    

};

int main()
{
    City c1;
   c1.setter();
   c1.getter();
}