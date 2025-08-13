#include <iostream>
using namespace std;

main()
{
    int size;

    cout << " Enter the size of elements :";
    cin >> size;

    int arr[size];

    cout << endl
         << " Array input :" << size << " elements" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << " Enter element of array at index " << i << " : ";
        cin >> arr[i];
    }
    cout << endl;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }

    cout << " Array after sorting in discending order : " << endl;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}