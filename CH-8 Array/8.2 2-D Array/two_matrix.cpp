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
    int b[row][col];
    int sum[row][col];

    cout << endl
         << "Matrix Input of a : " << endl;

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
         << "Matrix Input of b : " << endl;

         for (int i = 0; i < row; i++)
         {
            for (int j = 0; j < col; j++)
            {
                cout << "Enter element b[" << i << "][" << j << "] : ";
                cin >> b[i][j];
            }
            cout << endl;
         }

         cout << endl << "matrix Output : " << endl;

         for (int i = 0; i < row; i++)
         {
            for (int j = 0; j < col; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
         }
}