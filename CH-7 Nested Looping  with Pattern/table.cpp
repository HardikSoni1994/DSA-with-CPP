#include<iostream>
using namespace std;

main()
{
   int start, end;
   cout << " Enter start number :";
   cin >> start;
   cout << " Enter End number :";
   cin >> end;

   for(int i = start; i <= end; i++ )  // outer loop (i)
   {
    for(int j = 1; j <= 10; j++) // inner loop (j)
    {
        cout << i << " * " << j << " = " << i * j << endl;
    }
    cout << endl;
   }
  

}