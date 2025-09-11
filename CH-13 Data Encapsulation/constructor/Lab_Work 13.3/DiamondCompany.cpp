#include <iostream>
#include <string.h>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    static string comp_ceo;

public:
    DiamondCompany(int comp_id, string comp_name, int comp_staff_quantity, int comp_revenue, int comp_import_raw_diamonds, int comp_export_diamonds)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;

        cout << "------------------------------------------------" << endl;
    }

    // getter
    void getDiamondCompanyData()
    {
        cout << endl
             << "Display Diamond Company Data" << endl;
        cout << "Company ID\t: " << this->comp_id << endl;
        cout << "Company Name : " << this->comp_name << endl;
        cout << "Company CEO Name : " << this->comp_ceo << endl;
        cout << "Company Staff Quantity : " << this->comp_staff_quantity << endl;
        cout << "Company Revenue : " << this->comp_revenue << endl;
        cout << "Company Import raw Diamonds : " << this->comp_import_raw_diamonds << endl;
        cout << "Company Export Diamonds : " << this->comp_export_diamonds << endl;
    }
};

string DiamondCompany::comp_ceo = "Harshad Mehta";