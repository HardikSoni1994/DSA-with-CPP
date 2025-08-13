#include <iostream>
using namespace std;

main()
{
    int size;

    cout << " Enter the number of elements : ";
    cin >> size;

    int array[size];

    cout << endl
         << " Array Input :-" << endl; // array input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "] : ";
        cin >> array[i];
    }
    
    cout << endl
         << " Array Output :-" << endl; // array output
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << endl
         << "Sum of array elements : " << sum << endl;

    cout << endl
        << " Average of array elements : " << (float)sum / size << endl;
}