#include <iostream>
#include <string.h>
using namespace std;

class Foodcafe
{
    // Attribute == data Member
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // Default Constructor
    Foodcafe()
    {
        // cout << "Welcome to Fast Food Cafe " << endl;

        cafe_id;
        cafe_name;
        cafe_type;
        cafe_rating;
        cafe_location;
        cafe_establish_year;
        cafe_staff_quantity;
    }

    // setter

    void setcafeData()
    {
        cout << endl
             << endl;
        cout << "Enter Cafe ID : ";
        cin >> this->cafe_id;

        cout << "Enter Cafe name : ";
        cin >> cafe_name;

        cout << "Enter Cafe Type (rooftop or Normal) : ";
        cin >> cafe_type;

        cout << "Enter Cafe rating ( 1 - 5 star ) : ";
        cin >> this->cafe_rating;

        cout << "Enter cafe Location : ";
        cin >> cafe_location;

        cout << "Enter Cafe Establish Year : ";
        cin >> this->cafe_establish_year;

        cout << "Enter cafe Staff Quantity : ";
        cin >> this->cafe_staff_quantity;
    }

    void getcafeData()
    {
        cout << endl;
        cout << "Fast Food Cafe Information" << endl
             << endl;
        cout << "Cafe ID : " << this->cafe_id << endl;
        cout << "cafe Name : " << this->cafe_name << endl;
        cout << "Cafe Type (rooftop or Normal) : " << this->cafe_type << endl;
        cout << "Cafe rating ( 1 - 5 star ) : " << this->cafe_rating << endl;
        cout << "Cafe Location : " << this->cafe_location << endl;
        cout << "Cafe Establish Year : " << this->cafe_establish_year << endl;
        cout << "Cafe Staff Quantity : " << this->cafe_staff_quantity << endl;
    }
};
