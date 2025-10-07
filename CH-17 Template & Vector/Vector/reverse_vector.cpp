#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> v(size);
    vector<int> revVector(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter elemet " << i + 1 << " : ";
        cin >> v[i];
    }
    cout << endl
         << "vector is : ";
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    int n = v.size();
    for (int i = 0; i < size; i++)
    {
        n--;
        revVector[n] = v[i];
    }
    cout << endl
         << "Reverse Vector is : ";
         for (int element : revVector)
         {
            cout << element << " ";
         }
         cout << endl;
         
}