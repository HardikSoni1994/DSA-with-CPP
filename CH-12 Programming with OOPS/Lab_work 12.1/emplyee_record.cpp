#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    int emp_salary;
    char emp_city[20];
    int emp_year_of_experience;
    char emp_company_name[30];
};

int main()
{
    Employee employee_1, employee_2, employee_3, employee_4, employee_5;

    cout << endl
         << "Employee class Bytes : " << sizeof(employee_1) << endl;

    // Employee_1
    cout << endl
         << "Employee 1 Details...." << endl
         << endl;

    cout << "Enter Employee ID : ";
    cin >> employee_1.emp_id;
    cout << "Enter Employee Name : ";
    cin >> employee_1.emp_name;
    cout << "Enter Employee Age : ";
    cin >> employee_1.emp_age;
    cout << "Enter Employee Role : ";
    cin >> employee_1.emp_role;
    cout << "Enter Employee Salary : ";
    cin >> employee_1.emp_salary;
    cout << "Enter Employee City : ";
    cin >> employee_1.emp_city;
    cout << "Enter Employee Year of Experience : ";
    cin >> employee_1.emp_year_of_experience;
    cout << "Enter Employee Company Name : ";
    cin >> employee_1.emp_company_name;

    cout << endl
         << "-------------------------------------------" << endl;

    // Employee 2
    cout << endl
         << "Employee 2 Details...." << endl
         << endl;

    cout << "Enter Employee ID : ";
    cin >> employee_2.emp_id;
    cout << "Enter Employee Name : ";
    cin >> employee_2.emp_name;
    cout << "Enter Employee Age : ";
    cin >> employee_2.emp_age;
    cout << "Enter Employee Role : ";
    cin >> employee_2.emp_role;
    cout << "Enter Employee Salary : ";
    cin >> employee_2.emp_salary;
    cout << "Enter Employee City : ";
    cin >> employee_2.emp_city;
    cout << "Enter Employee Year of Experience : ";
    cin >> employee_2.emp_year_of_experience;
    cout << "Enter Employee Company Name : ";
    cin >> employee_2.emp_company_name;

    cout << endl
         << "-------------------------------------------" << endl;

    // Employee 3
    cout << endl
         << "Employee 3 Details...." << endl
         << endl;

    cout << "Enter Employee ID : ";
    cin >> employee_3.emp_id;
    cout << "Enter Employee Name : ";
    cin >> employee_3.emp_name;
    cout << "Enter Employee Age : ";
    cin >> employee_3.emp_age;
    cout << "Enter Employee Role : ";
    cin >> employee_3.emp_role;
    cout << "Enter Employee Salary : ";
    cin >> employee_3.emp_salary;
    cout << "Enter Employee City : ";
    cin >> employee_3.emp_city;
    cout << "Enter Employee Year of Experience : ";
    cin >> employee_3.emp_year_of_experience;
    cout << "Enter Employee Company Name : ";
    cin >> employee_3.emp_company_name;

    cout << endl
         << "-------------------------------------------" << endl;

    // Employee 4
    cout << endl
         << "Employee 4 Details...." << endl
         << endl;

    cout << "Enter Employee ID : ";
    cin >> employee_4.emp_id;
    cout << "Enter Employee Name : ";
    cin >> employee_4.emp_name;
    cout << "Enter Employee Age : ";
    cin >> employee_4.emp_age;
    cout << "Enter Employee Role : ";
    cin >> employee_4.emp_role;
    cout << "Enter Employee Salary : ";
    cin >> employee_4.emp_salary;
    cout << "Enter Employee City : ";
    cin >> employee_4.emp_city;
    cout << "Enter Employee Year of Experience : ";
    cin >> employee_4.emp_year_of_experience;
    cout << "Enter Employee Company Name : ";
    cin >> employee_4.emp_company_name;

    cout << endl
         << "-------------------------------------------" << endl;

    // Employee 5
    cout << endl
         << "Employee 5 Details...." << endl
         << endl;

    cout << "Enter Employee ID : ";
    cin >> employee_5.emp_id;
    cout << "Enter Employee Name : ";
    cin >> employee_5.emp_name;
    cout << "Enter Employee Age : ";
    cin >> employee_5.emp_age;
    cout << "Enter Employee Role : ";
    cin >> employee_5.emp_role;
    cout << "Enter Employee Salary : ";
    cin >> employee_5.emp_salary;
    cout << "Enter Employee City : ";
    cin >> employee_5.emp_city;
    cout << "Enter Employee Year of Experience : ";
    cin >> employee_5.emp_year_of_experience;
    cout << "Enter Employee Company Name : ";
    cin >> employee_5.emp_company_name;

    cout << endl
         << "Employee's Record System : " << endl
         << endl;

    cout << "Employee 1 ID\t: " << employee_1.emp_id << endl;
    cout << "Employee 1 Name\t: " << employee_1.emp_name << endl;
    cout << "Employee 1 Age\t: " << employee_1.emp_age << endl;
    cout << "Employee 1 Role\t: " << employee_1.emp_role << endl;
    cout << "Employee 1 Salary\t: " << employee_1.emp_salary << endl;
    cout << "Employee 1 City\t: " << employee_1.emp_id << endl;
    cout << "Employee 1 Year of Experience\t: " << employee_1.emp_year_of_experience << endl;
    cout << "Employee 1 Company Name\t: " << employee_1.emp_company_name << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Employee 2 ID\t: " << employee_2.emp_id << endl;
    cout << "Employee 2 Name\t: " << employee_2.emp_name << endl;
    cout << "Employee 2 Age\t: " << employee_2.emp_age << endl;
    cout << "Employee 2 Role\t: " << employee_2.emp_role << endl;
    cout << "Employee 2 Salary\t: " << employee_2.emp_salary << endl;
    cout << "Employee 2 City\t: " << employee_2.emp_id << endl;
    cout << "Employee 2 Year of Experience\t: " << employee_2.emp_year_of_experience << endl;
    cout << "Employee 2 Company Name\t: " << employee_2.emp_company_name << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Employee 3 ID\t: " << employee_3.emp_id << endl;
    cout << "Employee 3 Name\t: " << employee_3.emp_name << endl;
    cout << "Employee 3 Age\t: " << employee_3.emp_age << endl;
    cout << "Employee 3 Role\t: " << employee_3.emp_role << endl;
    cout << "Employee 3 Salary\t: " << employee_3.emp_salary << endl;
    cout << "Employee 3 City\t: " << employee_3.emp_id << endl;
    cout << "Employee 3 Year of Experience\t: " << employee_3.emp_year_of_experience << endl;
    cout << "Employee 3 Company Name\t: " << employee_3.emp_company_name << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Employee 4 ID\t: " << employee_4.emp_id << endl;
    cout << "Employee 4 Name\t: " << employee_4.emp_name << endl;
    cout << "Employee 4 Age\t: " << employee_4.emp_age << endl;
    cout << "Employee 4 Role\t: " << employee_4.emp_role << endl;
    cout << "Employee 4 Salary\t: " << employee_4.emp_salary << endl;
    cout << "Employee 4 City\t: " << employee_4.emp_id << endl;
    cout << "Employee 4 Year of Experience\t: " << employee_4.emp_year_of_experience << endl;
    cout << "Employee 4 Company Name\t: " << employee_4.emp_company_name << endl;

    cout << endl
         << "-------------------------------------------" << endl;

    cout << "Employee 5 ID\t: " << employee_5.emp_id << endl;
    cout << "Employee 5 Name\t: " << employee_5.emp_name << endl;
    cout << "Employee 5 Age\t: " << employee_5.emp_age << endl;
    cout << "Employee 5 Role\t: " << employee_5.emp_role << endl;
    cout << "Employee 5 Salary\t: " << employee_5.emp_salary << endl;
    cout << "Employee 5 City\t: " << employee_5.emp_id << endl;
    cout << "Employee 5 Year of Experience\t: " << employee_5.emp_year_of_experience << endl;
    cout << "Employee 5 Company Name\t: " << employee_5.emp_company_name << endl;

}