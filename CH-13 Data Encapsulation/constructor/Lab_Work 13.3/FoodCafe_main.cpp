#include <iostream>
#include "FoodCafe.cpp"
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Fast Food Cafe : ";
    cin >> n; // Input number of Cafe

    // Array of Object
    Foodcafe cafe1[n];


    // Input Data
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Enter details for Fast Food Cafe " << i + 1;
        cafe1[i].setcafeData();
    }

    // Display Data
    for (int i = 0; i < n; i++)
    {
        cafe1[i].getcafeData();
    }
}