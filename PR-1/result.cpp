#include<iostream>
using namespace std;
main(){
    int mark;
    char grade;
    
    cout << endl << "Enter your Score";
    cin >> mark;
    grade = (mark >= 90)? 'A':
            (mark >= 80)? 'B':
            (mark >= 70)? 'C':
            (mark >= 60)? 'D':
                          'f';

    cout << "Your Grade :=  " << grade << endl;

    switch(grade){
        case 'A':
            cout << "Your result is Excellent performance" << endl;
            break;
        case 'B':
            cout << "very good job" << endl;
            break;
        case 'C':
            cout << "good keep working harder" << endl;
            break;
        case 'D':
            cout << "you passed, but try to improve" << endl;
            break;
        case 'F':
            cout << "you failed. better luck next time" << endl;
            break;
        default:
            cout<<"Invalid grade Entered..!"<<endl;

    }

    if(grade == 'A' || grade == 'B' || grade == 'C'){
        cout << "eligible for next chapter" << endl;
    }
    else{
        cout << "not eligible for next chapter" << endl;
    }
}