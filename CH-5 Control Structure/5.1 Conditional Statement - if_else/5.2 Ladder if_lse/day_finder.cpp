#include<iostream>
using namespace std;

main()
{
    int day;
    cout <<"Enter the Day (1-7): ";
    cin >> day;

    if(  day == 1)
    {
        cout <<"Monday" << endl;
    }
    else if (day == 2)
    {
        cout <<"Tuesday" << endl;
    }
    else if (day == 3)
    {
        cout <<"Wednesday" << endl;
    }
    else if (day == 4)
    {
        cout <<"Thursday" << endl;
    }
    else if (day == 5)
    {
        cout <<"Friday" << endl;
    }
    else if (day == 6)
    {
        cout << "saturday" << endl;
    }
    else if (day == 7)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout <<"Invalid Day" << endl;
    }
}