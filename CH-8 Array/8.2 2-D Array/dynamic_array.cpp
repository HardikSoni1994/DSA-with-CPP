#include <iostream>
using namespace std;

main()
{
    int row, col;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the number of columns : ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Matrix Input : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    int sum = 0; // Variable to store the sum of elements in the matrix

    cout << endl
         << "Matrix Output : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
            sum += a[i][j];
        }
        cout << endl;
    }
    cout << endl << "Sum of all elements in the matrix is : " << sum << endl << endl;
    cout << endl << "average of all elements in the matrix is : " << (float)sum/(row*col) << endl << endl;  // Casting to float to avoid integer division and also find average.
}