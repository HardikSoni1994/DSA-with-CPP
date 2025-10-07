#include <iostream>
#include "Crud.cpp"
using namespace std;

int main()
{
    DynamicMemoryAllocation list; // creating object of class.

    int choice, data, position;

    do
    {
        cout << endl;
        cout << "Press 1 for Append Node.." << endl;
        cout << "Press 2 for Insert at Beginning.." << endl;
        cout << "Press 3 for Search Node by Position.." << endl;
        cout << "Press 4 for Delete Node by Position.." << endl;
        cout << "Press 5 for Reverse the Linked List.." << endl;
        cout << "Press 6 for Display all Nodes.." << endl;
        cout << "Press 0 for Exit.." << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Element : ";
            cin >> data;
            list.append(data);
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> data;
            list.insertAtBeginning(data);
            break;
        case 3:
            cout << "Enter Position : ";
            cin >> position;
            list.search(position);
            break;
        case 4:
            cout << "Enter Position : ";
            cin >> position;
            list.deleteNode(position);
            break;

        case 5:
            list.reverse();
            break;

        case 6:
            cout << endl
                 << "Display All Nodes : ";
            list.display();
            break;

        case 0:
            cout << endl
                 << "Exit.." << endl
                 << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice." << endl;
        }
    } while (choice != 0);
}