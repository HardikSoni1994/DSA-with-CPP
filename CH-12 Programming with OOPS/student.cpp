#include <iostream>
using namespace std;

// Student Structure
class Student
{
public:
    // Attribute == Data Members
    int rollNo;    // 4
    char name[20]; // 20
    int age;       // 4
    char gender;   // 4
};

int main()
{
    // object : class_Name objectName;
    Student student;

    // cout << "Student Class Bytes : " << sizeof(student); // Bytes always object ni count thase....

    // (.) Dot Operator
    cout << endl;
    cout << "Enter your Roll No. :";
    cin >> student.rollNo;
    cout << "Enter your Name :";
    cin >> student.name;
    cout << "Enter your Age :";
    cin >> student.age;
    cout << "Enter your Gender :";
    cin >> student.gender;

    cout << endl
         << "Student Information : " << endl << endl;

    cout << "Roll No\t:" << student.rollNo << endl;
    cout << "Name\t:" << student.name << endl;
    cout << "Age\t:" << student.age << endl;
    cout << "Gender\t:" << student.gender << endl;
}