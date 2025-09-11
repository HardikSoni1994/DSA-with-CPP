#include "Hotel.cpp"

int main()
{
    int n;
    cout << "Enter Number of Hotels : ";
    cin >> n;
    fflush(stdin);

    // Display common Hotel Location

    Hotel::setHotel_Location();

    Hotel h1[n]; // Array of objects

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Enter Details of Hotel : " << i + 1 << endl
             << endl;
        h1[i].setHotelData();
    }

    // Output

    cout << "Display Hotel Records : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Hotel : " << i + 1 << endl;
        h1[i].getHotelData();
    }
}
char Hotel::hotel_location[20] = ""; // initially empty