#include <iostream>
#define MAX 100
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
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
};

int main()
{
    Stack stack(MAX);
    int num;
    cout << "Enter any Number :";
    cin >> num;

    while (num != 0)
    {
      
        // cout << rem << " ";
        stack.push(num % 2);

        num = num / 2;
    }
    stack.display();
}