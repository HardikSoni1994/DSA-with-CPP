// Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include <iostream>
using namespace std;

int cube(int *num)
{
    return (*num) * (*num) * (*num);
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[5][5];

    cout << "Enter array of elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(*(arr + i) + j);
        }
    }
    cout << "cube of all elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << cube(&arr[i][j]) << "  ";
        }
        cout << endl;
    }
    return 0;
}