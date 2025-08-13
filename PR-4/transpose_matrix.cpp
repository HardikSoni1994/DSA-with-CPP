#include <iostream>
using namespace std;

main()
{
    int row,col;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the number of columns : ";
    cin >> col;

    int arr[row][col];

    cout << endl << " Array input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl << " Array output : " << endl;
    
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
    cout << "transpose of matrix " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}