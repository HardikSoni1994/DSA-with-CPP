#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template Class
template <class T1, class T2>
class Student
{
    T1 id;
    T2 name;

public:
    // Constructor
    Student(T1 i, T2 n)
    {
        id = i;
        name = n;
    }

    // Display Method
    void display()
    {
        cout << "ID: " << id << "," << endl << "Name: " << name << endl;
    }

    // Getter for ID
    T1 getId()
    {
        return id;
    }
};

int main()
{
    vector<Student<int, string>> students; // vector of Student objects
    int choice;

    do
    {
        cout << endl << "--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            students.push_back(Student<int, string>(id, name));
            cout << endl << "Student Added Successfully!" << endl;
        }
        else if (choice == 2)
        {
            cout << endl << "--- Student List ---" << endl;
            for (int i = 0; i < students.size(); i++)
            {
                students[i].display();
            }
            if (students.empty())
            {
                cout << endl << "No Students Found!" << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter ID to Remove: ";
            cin >> id;
            bool found = false;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == id)
                {
                    students.erase(students.begin() + i);
                    cout << endl << "Student Removed Successfully!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student with ID " << id << endl << " not found!" << endl;
        }
        else if (choice == 4)
        {
            int id;
            cout << "Enter ID to Search: ";
            cin >> id;
            bool found = false;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == id)
                {
                    cout << "Student Found: " << endl;
                    students[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student with ID " << id << endl << " Not found!" << endl;
        }
        else if (choice == 5)
        {
            cout << endl << "Exiting Program..." << endl;
        }
        else
        {
            cout << endl << "Invalid Choice! Try Again..." << endl;
        }

    } while (choice != 5);

    return 0;
}