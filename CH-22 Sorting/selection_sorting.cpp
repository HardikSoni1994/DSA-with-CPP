#include <iostream>
using namespace std;

void seclectionSort(int[], int);

int main()
{
    int size;
    cout << "Enter size of Array : ";
    cin >> size;

    int arr[size];

    cout << endl
         << "Array input " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Array befor sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    seclectionSort(arr, size);

    return 0;
}

void seclectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // if (minIndex != i)
        // {
        //     swap(arr[i], arr[minIndex]);
        // }

        int swap = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = swap;       
    }
    cout << "Array after sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}