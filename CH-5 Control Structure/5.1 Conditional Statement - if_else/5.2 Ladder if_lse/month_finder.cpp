#include<iostream>
using namespace std;

main()
{
    int month;
    cout <<"Enter the month (1-12): ";
    cin >> month;

    if(month == 1)
    {
        cout <<"January" << endl;
    }
    else if (month == 2)
    {
        cout <<"February" << endl;
    }
    else if (month == 3)
    {
        cout <<"March" << endl;
    }
    else if (month == 4)
    {
        cout <<"April" << endl;
    }
    else if (month == 5)
    {
        cout <<"May" << endl;
    }
    else if (month == 6)
    {
        cout << "June" << endl;
    }
    else if (month == 7)
    {
        cout << "July" << endl;
    }
    else if (month == 8)
    {
        cout << "Aug" << endl;
    }
    else if (month == 9)
    {
        cout << "September" << endl;
    }
    else if (month == 10)
    {
        cout << "Octomber" << endl;
    }
    else if (month == 11)
    {
        cout << "November" << endl;
    }
    else if (month == 12)
    {
        cout << "December" << endl;
    }
    else
    {
        cout <<"Invalid Month" << endl;
    }
}