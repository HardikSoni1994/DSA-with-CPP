#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter your Row : ";
    cin >> row;
    cout << "Enter your column : ";
    cin >> col;

    vector<int> v(col);

    // 2D vector
    vector<vector<int>> matrix(row, v);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter matrix [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
            
        }
        cout << endl;
    }
    cout << endl;
}