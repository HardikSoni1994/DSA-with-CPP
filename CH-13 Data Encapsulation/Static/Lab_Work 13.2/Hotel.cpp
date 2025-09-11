#include <iostream>
#include <string.h>
using namespace std;

class Hotel


{
private:
    // Attributes == data Member
    int hotel_id;
    char hotel_name[20];
    char hotel_type[20];
    int hotel_rating;
    static char hotel_location[20];  // static  data member 
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    // setter
public:
    void setHotelData()
    {
        cout << "Enter your Hotel ID : ";
        cin >> this->hotel_id;
        fflush(stdin);
        cout << "Enter your Hotel Name : ";
        gets(hotel_name);
        fflush(stdin);
        cout << "Enter your Hotel type (Hotel or Motel) : ";
        gets(hotel_type);
        fflush(stdin);
        cout << "ENter your Hotel rating (in digit - 1 - 7 star) : ";
        cin >> this->hotel_rating;
        fflush(stdin);
        cout << "Enter your Hotel Establish Year : ";
        cin >> this->hotel_establish_year;
        fflush(stdin);
        cout << "Enter your Hotel staff Quantity : ";
        cin >> this->hotel_staff_quantity;
        fflush(stdin);
        cout << "Enter your Hotel room Quantity : ";
        cin >> this->hotel_room_quantity;
        fflush(stdin);
    }

    // getter
    void getHotelData()
    {
        cout << endl
             << endl;
        cout << "Enter Your Hotel ID\t: " << this->hotel_id << endl;
        cout << "Enter Your Hotel Name\t: " << this->hotel_name << endl;
        cout << "Enter Your Hotel Type (Hotel or Motel)\t: " << this->hotel_type << endl;
        cout << "Enter Your Hotel rating\t\t: " << this->hotel_rating << endl;
        cout << "Enter Your Hotel Location\t" << this->hotel_location << endl;
        cout << "Enter Your Hotel Establish Year\t: " << this->hotel_establish_year << endl;
        cout << "Enter Your Hotel Staff Quantity\t: " << this->hotel_staff_quantity << endl;
        cout << "Enter Your Hotel room Quantity\t: " << this->hotel_room_quantity << endl;
    }

    static void setHotel_Location()  // static member function
    {
        cout << "Enter Common Location of Number of All Hotels : ";
        gets(hotel_location);
        fflush(stdin);
    }
};
