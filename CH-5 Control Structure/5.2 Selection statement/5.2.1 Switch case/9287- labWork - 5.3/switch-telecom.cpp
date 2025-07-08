// Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case

#include<iostream>
using namespace std;

main()
{
    cout << "Welcome to Telecom service" << endl << endl;
    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    int num;
    cout <<"Enter your choice :";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Thank you for choice English..." << endl << endl;
        cout <<"Press 1 for Internet Recharge." << endl;
        cout <<"Press 2 for Top-up Recharge." << endl;
        cout <<"Press 3 for Special Recharge." << endl;
        int choice1;
        cout <<"Enter Your Choice :";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
            cout <<"You have successfully done a Internet Recharge." << endl;
            break;
        case 2:
            cout <<"You have successfully done a Top-up Recharge." << endl;
            break;
        case 3:
            cout <<"You have successfully done a Special recharge." << endl;
            break;
        default:
            cout <<"Invalid Choice.." << endl;
            break;
        }
        break;
    case 2:
        cout <<"Hindi bhasha ko chunne ke liye shukriya..." <<endl << endl;
        cout <<"Internet Recharge ke liye 1 dabaiye.." << endl;
        cout <<"Top-up Rechatge ke liye 2 dabaiye.." << endl;
        cout <<"Special Recharge ke liye 3 dabaiye.." << endl;
        int choice2;
        cout <<"apna chayan dakhil kariye :";
        cin >> choice2;
        switch (choice2)
        {
        case 1:
            cout <<"Aapne safaltapurvak Internet Recharge kar liya he." << endl; 
            break;
        case 2:
            cout <<"Aapne safaltapurvak Top-up Recharge kar liya he." << endl;
            break;
        case 3:
            cout <<"Aapne safaltapurvak Special Recharge kar liya he." << endl;
            break;
        default:
            cout <<"Amanya vikalp." << endl;
            break;
        }
        break;
    case 3:
        cout <<"Gujarati bhasha nu chayan karva mate aabhar..." << endl << endl;
        cout <<"Internet Recharge mate 1 dabao.." << endl;        
        cout <<"Top-up Recharge mate 2 dabao.." << endl;        
        cout <<"Special Recharge mate 3 dabao.." << endl;
        int choice3;
        cout <<"Tamaro nirnay daakhal karo :";
        cin >> choice3;
        switch (choice3)
        {
        case 1:
            cout <<"Tame safaltapurvak Internet Recharge karyu chhe." << endl;
            break;
        case 2:
            cout <<"Tame safaltapurvak Top-up Recharge karyu chhe" << endl;
            break;
        case 3:
            cout <<"Tame safaltapurvak Special Recharge karyu chhe" << endl;
            break;
        default:
            cout <<"amānya pasandagi." << endl;
            break;
        }
        break; 
    default:
        cout <<" Invalid option Choice.. please choice valid option..." << endl;
        break;
    }
}