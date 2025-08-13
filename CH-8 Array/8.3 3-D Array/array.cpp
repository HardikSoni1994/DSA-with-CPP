#include<iostream>
using namespace std;

main()
{
    int size, row, col;

    // cout << endl << " Array Input : " << endl;
    // cout << "Enter the size of the matrix: ";
    // cin >> size;
    // cout << " Enter the number of rows: ";
    // cin >> row;
    // cout << " Enter the number of columns: ";
    // cin >> col;

    int a[2][2][3];

    cout << "Array Output : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << "Enter element a[" << i << "][" << j << "][" << k << "] : ";
                cin >> a[i][j][k];
            }
        }
        cout << endl;
    }
    cout << "Array Output : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;   
    }
}