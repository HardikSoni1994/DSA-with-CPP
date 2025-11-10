#include <iostream>
#include <vector>
using namespace std;

int quickPartition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot) // step 9 - comparison with pivot with (<= or >=)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[end], arr[i]);
    return i;
}

// step 6 - quickSort function
void quickSort(vector<int> &arr, int start, int end) 
{
    if (start < end)
    {
        // step 7 - partitioning index 
        int pivotIndex = quickPartition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1); // left recursive call
        quickSort(arr, pivotIndex + 1, end);   // right recursive call
    }
}

int main()
{
    // Input number of elements - step 1
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    // step 2
    vector<int> arr;

    cout << endl
         << "Enter Elements : " << endl;
    
    // step 3 - input elements
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Element a[" << i << "] : ";
        cin >> element;
        arr.push_back(element);
    }

    cout << endl
         << "Array Element are : ";

    // step 4 - print elements
    for (int element : arr)
    {
        cout << element << " ";
    }
    quickSort(arr, 0, n - 1); // step 5 - calling quickSort function

    cout << endl
         << "Sorted array is : ";
    // step - 8 print sorted elements
    for (int element : arr)
    {
        cout << element << " ";
    }
}