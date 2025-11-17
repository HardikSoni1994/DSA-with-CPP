#include <iostream>
#include "crud.cpp"
using namespace std;

int main()
{
    LinkedList l1; // creating object of class (LinkedList)

    int choice, data, position;

    do
    {
        cout << endl;
        cout << "Press 1 for Insert from beginning.." << endl;
        cout << "Press 2 for Insert from ending.." << endl;
        cout << "Press 3 for Insert At any position.." << endl;
        cout << "Press 4 for Update" << endl;
        cout << "Press 5 for Delete from beginning.." << endl;
        cout << "Press 6 for Delete from ending.." << endl;
        cout << "Press 7 for Delete from At any position.." << endl;
        cout << "Press 8 for Display all Nodes.." << endl;
        cout << "Press 9 for Node Length.." << endl;
        cout << "Press 0 for Exit.." << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Element : ";
            cin >> data;
            l1.insertFromBeginning(data);
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> data;
            l1.instertFromEnding(data);
            break;
        case 3:
            cout << "Enter Element : ";
            cin >> data;
            cout << "Enter Position : ";
            cin >> position;
            l1.insertAtPosition(data, position);
            break;
        case 4:
            cout << "Enter Element : ";
            cin >> data;
            cout << "Enter Position : ";
            cin >> position;
            l1.update(data, position);
            break;

        case 5:
            l1.deleteFromBeginning();
            break;

        case 6:
            l1.deleteFromEnding();
            break;

        case 7:
            cout << "Enter Position : ";
            cin >> position;
            l1.deleteAnyPosition(position);
            break;

        case 8:
            cout << endl
                 << "Display All Nodes : ";
            l1.displayAllNodes();
            break;
        case 9:
            cout << endl
                 << "Length : " << l1.length() << endl;
            break;
            ;
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

    int n;
    cout << "Enter number of Element : ";
    cin >> n;

    int arr[n];

    cout << endl
         << "Array input : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Element arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Element of Array is : ";

    for (int element : arr) // forEach loop
    {
        cout << element << " ";
    }

    int index = linear_searching(arr, n);

    if (index == -1)
    {
        cout << "Element not found.." << endl;
    }
    else
    {
        cout << "Searching element Index : " << index << endl;
    }

    cout << "Array before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    return 0;
}