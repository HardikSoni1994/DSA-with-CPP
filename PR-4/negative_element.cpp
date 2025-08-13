#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter size of the array : ";
    cin >> size;

    int arr[size];
    cout << endl
         << "Array Input : " << endl << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element arr[" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl
         << " Array Output of negative elements : " << endl << endl;
         
         for (int i = 0; i < size; i++)
         {
            if (arr[i] < 0)
            {
                cout << arr[i] << "\t";

            }
         }
         cout << endl;
}