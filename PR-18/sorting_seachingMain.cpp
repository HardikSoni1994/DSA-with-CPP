#include <iostream>
#include <vector>
#include "sorting_searching.cpp"
using namespace std;

int main()
{
    Sorting_Searching sort;
    int n, index, target, choice;

    cout << "-----Sorting and Searching Algorithms-----" << endl;

    cout << "Enter number of Element : ";
    cin >> n;

    vector<int> arr(n);

    cout << endl
         << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element arr[" << i << "] : ";
        cin >> arr[i];
    }

    do
    {
        cout << endl;
        cout << "Press 1 for Selection Sort" << endl;
        cout << "Press 2 for Merge Sort" << endl;
        cout << "Press 3 for Binary Search (after Merge Sort)" << endl;
        cout << "Press 4 for Display Array" << endl;
        cout << "Press 5 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            sort.selectionSort(arr);
            cout << endl
                 << "Array selection Sort : ";
            sort.display(arr);
            break;

        case 2:
            sort.mergeSort_ascending(arr, 0, n - 1);
            cout << endl << "Array Merge Sort : ";
            sort.display(arr);
            break;

        case 3:

            cout << "Searching and sorting." << endl
                 << endl;
            sort.mergeSort_ascending(arr, 0, n - 1);

            // int target;
            cout << "Enter element to search: ";
            cin >> target;

            index = sort.binarySearch(arr, 0, n - 1, target);
            if (index == -1)
                cout << "Element not found....";
            else
                cout << "Index is : " << index << endl;
            break;

        case 4:
            cout << endl
                 << "Array elements are: ";
            sort.display(arr);
            break;

        case 5:
            cout << "Exit the sorting and searching program....." << endl;
            break;

        default:
            cout << "Invalid choice Please Try again...";
            break;
        }

    } while (choice != 5);
    return 0;
}