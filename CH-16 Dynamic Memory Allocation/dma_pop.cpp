#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size : ";
    cin >> size;

    int *arr = new int[size];

    if (arr == nullptr)
    {
        cout << "Memory Allocation failed..!" << endl;
        return 1;
    }
    // else
    // {
    //     cout << "Memory Alloaction Successfully..." << endl;
    // }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element" << i + 1 << " : ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
        sum += arr[i];
    }

    delete[] arr;
    arr = nullptr;

    if (arr != nullptr)
    {
        cout << "Memory deallocation failed..." << endl;
    }
   
}