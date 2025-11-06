#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;
    int length;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->length = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack is overflow.." << endl;
        }
        else
        {
            this - top++;
            this->arr[this->top] = element;
            this->length++;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack if underflow..";
        }
        else
        {
            this->top--;
            this->length--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty..";
        }
        else
        {
            cout << "Peek : " << this->arr[this->top];
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty..";
        }
        else
        {
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            // cout << "Stack is Empty.." << endl;
            return true;
        }
        else
        {
            // cout << "Stack is not Empty" << endl;
            return false;
        }
    }

    void isFull()
    {
        (this->top == this->size - 1) ? cout << "Stack is Full..." << endl : cout << "Stack is not Full.." << endl;
    }

    void printLength()
    {
        cout << "Length : " << this->length << endl;
    }
};

int main()
{
    int size;
    cout << "Enter number of Stack Element : ";
    cin >> size;
    Stack stack(size);
    int choice;
    int element;

    do
    {
        cout << "Press 1 for Push Operation" << endl;
        cout << "Press 2 for Pop Operation" << endl;
        cout << "Press 3 for Peek Operation" << endl;
        cout << "Press 4 for Display Operation" << endl;
        cout << "Press 5 for isEmpty Operation" << endl;
        cout << "Press 6 for isFull Operation" << endl;
        cout << "Press 7 for size(length) Operation" << endl;
        cout << "Press 0 for Exit" << endl;

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
            stack.display();
            break;
        case 5:
            stack.isEmpty() ? cout << endl
                                   << "Stack is Empty..." << endl
                            : cout << "Stack is not Empty.." << endl;
            break;
        case 6:
            stack.isFull();
            break;
        case 7:
            stack.printLength();
            break;
        case 0:
            cout << "You're Exit.." << endl;
            break;

        default:
            cout << "Invalid Choice.." << endl;
            break;
        }
    } while (choice != 0);
}