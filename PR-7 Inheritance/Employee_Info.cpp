#include <iostream>
#include <string.h>
using namespace std;

// Base Class A
class A
{
protected:
    int emp_id;
    char emp_name[50];

public:
    void setA()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        fflush(stdin);
        cout << "Enter Employee Name: ";
        gets(emp_name);
    }

    void getA()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
    }
};

// Derived Class B (from A)
class B : public A
{
protected:
    int emp_age;
    char emp_role[50];

public:
    void setB()
    {
        setA();
        cout << "Enter Employee Age: ";
        cin >> emp_age;
        fflush(stdin);
        cout << "Enter Employee Role: ";
        gets(emp_role);
    }

    void getB()
    {
        getA();
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
    }
};

// Derived Class C (from B)
class C : public B
{
protected:
    float emp_salary;
    int emp_experience;

public:
    void setC()
    {
        setB();
        cout << "Enter Employee Salary: ";
        cin >> emp_salary;
        cout << "Enter Employee Experience (in years): ";
        cin >> emp_experience;
    }

    void getC()
    {
        getB();
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
    }
};

// Derived Class D (from C)
class D : public C
{
protected:
    char emp_city[50];
    char emp_company_name[50];

public:
    void setD()
    {
        setC();
        fflush(stdin);
        cout << "Enter Employee City: ";
        gets(emp_city);
        cout << "Enter Employee Company Name: ";
        gets(emp_company_name);
    }

    void getD()
    {
        getC();
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Company Name: " << emp_company_name << endl;
    }
};

int main()
{
    D emp;  // Object of last derived class
    cout << "--- Enter Employee Information ---" << endl;
    emp.setD();

    cout << "\n--- Employee Information ---" << endl;
    emp.getD();
}
