#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    int size;
    cout << "Enter number of Stack Element : ";
    cin >> size;
    
    // Stack object creation with specified size
    Stack stack(size);
    int choice;
    int element;

    do
    {
        cout << endl;
        cout << "Stack Operation Program" << endl;
        cout << "-----------------------" << endl;
        cout << "Press 1 for Push Operation" << endl;
        cout << "Press 2 for Pop Operation" << endl;
        cout << "Press 3 for Peek Operation" << endl;
        cout << "Press 4 for Check if Stack is Empty" << endl;
        cout << "Press 5 for Check if Stack is Full" << endl;
        cout << "Press 6 for Display Stack Elements" << endl;
        cout << "Press 7 for Display Stack Length" << endl;
        cout << "Press 0 to Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Any Element : ";
            cin >> element;
            stack.push(element); // object
            break;
            case 2:
            stack.pop();
            break;
            case 3:
            stack.peek();
            break;
            case 4:
            stack.isEmpty();
            break;
            case 5:
            stack.isFull();
            break;
            case 6:
            stack.display();
            break;
            case 7:
            stack.printLength();
            break;
            case 0:
            cout << "You're Exit.. Thank you...." << endl;
            break;
        default:
            cout << "Invalid Choice.." << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}
