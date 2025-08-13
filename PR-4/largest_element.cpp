#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the number of columns : ";
    cin >> col;

    int arr[row][col];

    cout << endl
         << " Array input : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

   
    int largest;

     cout << endl
         << " Array output : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    cout << " Largest element in the array is : " << largest << endl;
}