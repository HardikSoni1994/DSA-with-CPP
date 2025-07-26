#include <iostream>
using namespace std;

main()
{
    int age;
    cout << "Enter Your Age :\t";
    cin >> age;

    (age >= 18) ? cout << "You are an Adult and You're Eligible for Voting...😀 " : cout << " You are a Minor and You're not Eligible for Voting..🤷‍♂️";
}