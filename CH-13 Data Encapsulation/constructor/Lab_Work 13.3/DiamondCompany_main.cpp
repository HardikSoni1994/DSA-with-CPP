#include <iostream>
#include <string.h>
#include "DiamondCompany.cpp"
using namespace std;

int main()
{
    int n;
    cout << "Enter Numbers of Diamond Company : ";
    cin >> n;

    // array of object with pointer
    DiamondCompany * companies[n];

    for (int i = 0; i < n; i++)
    {
        int comp_id, comp_staff_quantity, comp_revenue, comp_import_raw_diammonds, comp_export_diamonds;
        string comp_name, comp_ceo;

        cout << endl
             << "Enter Details for Diamond Company : " << i + 1 << endl;

        cout << endl
             << "Enter Company ID\t: ";
        cin >> comp_id;

        cout << endl
             << "Enter Company Name : ";
        cin >> comp_name;

        cout << endl
             << "Enter Company Staff Quantity : ";
        cin >> comp_staff_quantity;

        cout << endl
             << "Enter Company Revenue (Per Year) : ";
        cin >> comp_revenue;

        cout << endl
             << "Enter Raw Diamond Imported per year : ";
        cin >> comp_import_raw_diammonds;

        cout << endl
             << "Enter Diamonds Exported per year : ";
        cin >> comp_export_diamonds;

        companies[i] = new DiamondCompany(comp_id, comp_name, comp_staff_quantity, comp_revenue, comp_import_raw_diammonds, comp_export_diamonds);
    }

    // Display Data
    cout << "Diamond Compnies Records " << endl;
    for (int i = 0; i < n; i++)
    {
        companies[i]->getDiamondCompanyData();
    }
};