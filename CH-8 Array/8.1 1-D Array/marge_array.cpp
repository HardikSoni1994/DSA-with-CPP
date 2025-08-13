#include <iostream>
using namespace std;

main()
{
    int size1, size2, size3;

    cout << "Enter the size of first array :";
    cin >> size1;
    cout << "Enter the size of second array :";
    cin >> size2;
    cout << "Enter the size of third array :";
    cin >> size3;

    int arr1[size1], arr2[size2], arr3[size3];
    int marge[size1 + size2 + size3];

    cout << endl
         << " First Array Input : " << endl;

    for (int i = 0; i < size1; i++)
    {
        cout << " Enter arr1[" << i << "] : ";
        cin >> arr1[i];  
    }

    cout << endl
         << " Second Array Input : " << endl;

    for (int i = 0; i < size2; i++)
    {
        cout << " Enter arr2[" << i << "] : ";
        cin >> arr2[i];  
    }
    cout << endl
         << " Third Array Input : " << endl;

    for (int i = 0; i < size3; i++)
    {
        cout << " Enter arr3[" << i << "] : ";
        cin >> arr3[i];  
    }
    cout << endl;
    
    for (int i = 0; i < size1; i++)
    {
        marge[i] = arr1[i];
        
    }
    for (int i = 0; i < size2; i++)
    {
        marge[i + size1] = arr2[i];
    }
    for (int i = 0; i < size3; i++)
    {
        marge[i + size1 + size2] = arr3[i];
    }
    
    for (int i = 0; i < size1 + size2 + size3; i++)
    {
        cout << marge[i] << "\t";
    }
}