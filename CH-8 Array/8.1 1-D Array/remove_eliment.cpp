#include<iostream>
using namespace std;

main()
{
    int arr[5], n;
    cout << " Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << " Enter element arr[" << i << "] : ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;  
            }
            j++;
        }
        
    }
    cout <<" Array afer removing duplicate Elelments is: ";
    for (int i = 0; i < n; i++)
    {
        cout << endl << arr[i] << " ";
    }
}