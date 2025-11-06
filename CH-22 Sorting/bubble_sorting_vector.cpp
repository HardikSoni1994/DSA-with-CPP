#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&, int);

int main()
{
    int size;
    cout << "Enter size of Array : ";
    cin >> size;

    vector<int> arr(size);

    cout << endl
         << "Array input " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "] :";
        cin >> arr[i];
    }

    cout << "Array before sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size);
}

void bubbleSort(vector<int>& arr, int size)
{
    int pass = 1;

    while (pass <= size - 1)
    {
        for (int i = 0; i < size - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // swapping
                int swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
        pass++;
    }

    cout << "Array after sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
