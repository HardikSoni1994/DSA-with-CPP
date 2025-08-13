#include <iostream>
using namespace std;
main()
{
    int size;
    cout << " Enter number of elements : ";
    cin >> size;

    int arr[size];

    cout << endl
         << " Array Input" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << " Enter arr[" << i << "] : ";
        cin >> arr[i];
    }
    
    cout << system("cls");
    int n;
    int pos, element;
    do
    {
        cout << endl << "crud operation" << endl;

    cout << " Press 1 for Insert" << endl;
    cout << " Press 2 for Push" << endl;
    cout << " Press 3 for Fetch" << endl;
    cout << " Press 4 for Update" << endl;
    cout << " Press 5 for Delete" << endl;
    cout << " Press 6 for Pop" << endl;
    cout << " Press 0 for Exit" << endl;

    cin >> n;

    switch (n)
    {
    case 1:
        system("cls");
        cout << endl
             << "Insert" << endl;
        
        cout << "Enter your Position of Index : ";
        cin >> pos; // e.g . 2
        cout <<"Enter New Element : ";
        cin >> element; // e.g. 100

       if (pos < size && pos >= 0)
       {
         for (int i = size - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = element;
        size++;
       }
       else
       {
        cout << " Invalid Position" << endl;
       }
        break;
    case 2:
        system("cls");
        cout << endl
             << "Push" << endl;
       cout << "Enter New Element : ";
       cin >> element;

       arr[size++] = element;
        break;
    case 3:
        system("cls");
        cout << endl
             << "Fetch" << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
        
        break;
    case 4:
        system("cls");
        cout << endl
             << "Update" << endl;
             cout << "Enter your Position of Index : ";
             cin >> pos;
             cout <<"Enter New Element : ";
             cin >> element;
             if (pos < size && pos >= 0)
             {
                arr[pos] = element;
             }
        break;
    case 5:
        system("cls");
        cout << endl
             << "Delete" << endl;
             cout << "Enter your Position of Index : ";
             cin >> pos;
             if (pos < size && pos >= 0)
             {
                for (int i = pos; i < size; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
             }
        break;
    case 6:
        system("cls");
        cout << endl
             << "Pop" << endl;
             size--;
        break;
    case 0:
        system("cls");
        cout << endl
             << "Exit";
        break;
    default:
        system("cls");
        cout << endl
        << "Invalid choice";
            break;
    }
    } while (n != 0);
    
}