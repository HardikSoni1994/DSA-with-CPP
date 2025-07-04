#include<iostream>
using namespace std;

main()
{
    float marks;
    cout << "Enter Your marks:"; // user will enter the marks
    cin >> marks; // user will enter the marks in terminal input

    if (marks >= 91 && marks <= 100)
    {
        cout <<endl
            <<"Your Grade is A+" << endl;  
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << endl
            <<"Your Grade is A" << endl;
    }
    else if(marks >= 71 && marks <= 80)
    {
        cout << endl
            <<"Your Grade is B" << endl;
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << endl
        <<"Your Grade is C" << endl;
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << endl
        <<"Your Grade is D" << endl;
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << endl
        <<"Your Grade is E" << endl;
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << endl
        <<"Your Grade is F" << endl;
    }
    else if (marks >= 0 && marks <= 32)
    {
        cout << endl
        <<"You are Fail... Try again next time Best of Luck" << endl;
    }
    else{
        cout << endl
            <<"Input marks is Invalid" << endl;
    }
}