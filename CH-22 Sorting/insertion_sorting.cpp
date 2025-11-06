#include <iostream>
using namespace std;

void insertionSort(int[], int);

int main()
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];

    cout << endl
         << "Array input " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Array befor sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Array after sorting : ";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}