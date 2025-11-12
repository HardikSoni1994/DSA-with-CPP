#include <iostream>
#include <vector>
using namespace std;

class Sorting_Searching
{
public:
    void selectionSort(vector<int> &arr) // selection sorting (Descending order)
    {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            int maxIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[maxIndex])
                {
                    maxIndex = j;
                }
            }
            swap(arr[i], arr[maxIndex]);
        }
    }

    // Merge_Sorting (Ascending order)
    void merge(vector<int> &arr, int start, int mid, int end)
    {
        int i = start,
            j = mid + 1;
        vector<int> temp;

        while (i <= mid && j <= end)
        {
            if (arr[i] <= arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while (i <= mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while (j <= end)
        {
            temp.push_back(arr[j]);
            j++;
        }

        for (int i = 0; i < temp.size(); i++)
        {
            arr[i + start] = temp[i];
        }
    }

    void mergeSort_ascending(vector<int> &arr, int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSort_ascending(arr, start, mid);
            mergeSort_ascending(arr, mid + 1, end);
            merge(arr, start, mid, end);
        }
    }

    // binary search (using Loop)
    int binarySearch(vector<int> &arr, int start, int end, int target)
    {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else if (target > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }

    // Display Array
    void display(const vector<int> &arr)
    {
        for (int element : arr)
        {
            cout << element << " ";
        }
        cout << endl;
    }
};
