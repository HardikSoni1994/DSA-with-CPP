#include<iostream>
using namespace std;

main()
{
    for(int num=1; num <= 100; num++){
        if(num % 2 == 0)
        {
            continue; // skip the current iteration
        }
        cout << num << "\t"; // print the number
    }
}