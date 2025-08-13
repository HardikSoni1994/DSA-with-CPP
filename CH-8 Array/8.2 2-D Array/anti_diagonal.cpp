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

    cout << " Array Input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Enter element a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }
        cout << " Array Output : " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i + j == row-1)
                {
                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
}