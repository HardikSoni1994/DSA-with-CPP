#include<iostream>
using namespace std;

main()
{
    int unit;
    float surcharge = 0.20;
    float bill;
    cout << " Enter Your Electricity Unit :";
    cin >> unit;

    if (unit <= 50)
    {
        bill = unit * 0.50;
        cout << endl << " Electricity Bill = " << bill + (bill)* surcharge;
    }
    else if (unit <= 150)
    {
        bill = 25 + (unit - 50) * 0.75;
        cout << endl << " Electricity Bill = " << bill + (bill) * surcharge;
    }
    else if (unit <= 250)
    {
        bill = 100 + (unit - 150) * 1.20;
        cout << endl << "Electricity Bill = " << bill + (bill) * surcharge;
    }
    else if (unit >= 250)
    {
        bill = 220 + (unit - 250) * surcharge;
        cout << endl <<" Electricity Bill = " << bill + (bill) * surcharge;
    }
    else{
        cout << endl << " Invalid unit..!";
    }
}