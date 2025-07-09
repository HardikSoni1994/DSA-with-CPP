#include<iostream>
using namespace std;

main()
{
    int num;
    cout <<"Enter any Number :";
    cin >> num;

   if (num % 2 == 0)
   { 
        if (num % 5 == 0)
        {
            cout << num <<" is Even and also devided by 5." << endl;
        }
        else
        {
            cout << num <<" is Even but not devided by 5." << endl;
        }
   }
   else{
    if (num % 5 == 0)
    {
        cout << num <<" is Odd and also devided by 5." << endl;
    }
    else{
        cout << num <<" is Odd but not divided by 5." << endl;
    }
    
   }
   
}