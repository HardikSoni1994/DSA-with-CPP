#include <iostream>
using namespace std;

main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int a[row][col];

    cout << endl
         << " Array Input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << " Array Output : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                cout << " " << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}