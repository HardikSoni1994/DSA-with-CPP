#include <iostream>
using namespace std;

main()
{
    int row, col, rowNum, colnum, sum = 0;

    cout << "Enter the size of row : ";
    cin >> row;
    cout << "Enter the size of column : ";
    cin >> col;

    int arr[row][col];

    cout << endl
         << "Array Input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Enter the number of row you want to sum : ";
    cin >> rowNum;
    cout << " Enter the number of column you want to sum : ";
    cin >> colnum;

    cout << endl
         << " Array output for sum : " << endl;
    for (int i = 0; i <= rowNum; i++)
    {
        for (int j = 0; j < colnum; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << endl
         << "Sum of Row " << rowNum << " is : " << sum << endl;

    cout << endl
         << " Sum of column " << colnum << " is : " << sum << endl;
}