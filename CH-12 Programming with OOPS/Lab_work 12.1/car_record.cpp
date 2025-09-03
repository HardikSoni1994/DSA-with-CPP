#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[30];
    char car_color[30];
    char car_model[30];
    int car_release_year;
};

int main()
{
    Car car_1, car_2, car_3, car_4;

    cout << endl
         << "Car class Bytes : " << sizeof(car_1) << endl;

    // Car 1
    cout << endl
         << "Car 1 Details...." << endl
         << endl;

    cout << "Enter Car ID : ";
    cin >> car_1.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car_1.car_company_name;
    cout << "Enter Car Color : ";
    cin >> car_1.car_color;
    cout << "Enter Car Model : ";
    cin >> car_1.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car_1.car_release_year;

    cout << endl
         << "-------------------------------------------" << endl;

    // Car 2
    cout << endl
         << "Car 2 Details...." << endl
         << endl;

    cout << "Enter Car ID : ";
    cin >> car_2.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car_2.car_company_name;
    cout << "Enter Car Color : ";
    cin >> car_2.car_color;
    cout << "Enter Car Model : ";
    cin >> car_2.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car_2.car_release_year;

    cout << endl
         << "-------------------------------------------" << endl;

    // Car 3
    cout << endl
         << "Car 3 Details...." << endl
         << endl;

    cout << "Enter Car ID : ";
    cin >> car_3.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car_3.car_company_name;
    cout << "Enter Car Color : ";
    cin >> car_3.car_color;
    cout << "Enter Car Model : ";
    cin >> car_3.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car_3.car_release_year;

    cout << endl
         << "-------------------------------------------" << endl;

    // Car 4
    cout << endl
         << "Car 4 Details...." << endl
         << endl;

    cout << "Enter Car ID : ";
    cin >> car_4.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car_4.car_company_name;
    cout << "Enter Car Color : ";
    cin >> car_4.car_color;
    cout << "Enter Car Model : ";
    cin >> car_4.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car_4.car_release_year;

    cout << endl
         << "Car's Record System : " << endl
         << endl;

    cout << "Car ID\t: " << car_1.car_id << endl;
    cout << "Car Company Name\t: " << car_1.car_company_name << endl;
    cout << "Car Color\t: " << car_1.car_color << endl;
    cout << "Car Model\t: " << car_1.car_model << endl;
    cout << "Car Release Year\t: " << car_1.car_release_year << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Car ID\t: " << car_2.car_id << endl;
    cout << "Car Company Name\t: " << car_2.car_company_name << endl;
    cout << "Car Color\t: " << car_2.car_color << endl;
    cout << "Car Model\t: " << car_2.car_model << endl;
    cout << "Car Release Year\t: " << car_2.car_release_year << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Car ID\t: " << car_3.car_id << endl;
    cout << "Car Company Name\t: " << car_3.car_company_name << endl;
    cout << "Car Color\t: " << car_3.car_color << endl;
    cout << "Car Model\t: " << car_3.car_model << endl;
    cout << "Car Release Year\t: " << car_3.car_release_year << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Car ID\t: " << car_4.car_id << endl;
    cout << "Car Company Name\t: " << car_4.car_company_name << endl;
    cout << "Car Color\t: " << car_4.car_color << endl;
    cout << "Car Model\t: " << car_4.car_model << endl;
    cout << "Car Release Year\t: " << car_4.car_release_year << endl;
}