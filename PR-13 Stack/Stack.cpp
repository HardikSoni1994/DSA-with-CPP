#include <iostream>
using namespace std;

// Base class
class Container
{
protected:
    int capacity;
    int length;

public:
    Container(int capacity)
    {
        this->capacity = capacity;
        this->length = 0;
    }

    // virtual function - polymorphism
    virtual void displayData()
    {
        cout << "Container capacity : " << this->capacity << endl;
        cout << "Container length : " << this->length << endl;
    }

    virtual bool checkEmpty()
    {
        if (this->length == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    virtual bool checkFull()
    {
        if (this->length == this->capacity)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    virtual ~Container()
    {
        cout << "Container Destructor Called" << endl;
    }
};
// inheritance of Stack class from Container class
class Stack : public Container
{
private:
    int *arr;
    int top;

public:
    Stack(int size) : Container(size) // calling base class constructor
    {
        this->arr = new int[size];
        this->top = -1;
    }

    // destructor
    ~Stack()
    {
        delete[] arr;
        arr = nullptr;
    }

    // push operation
    void push(int element)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack Overflow.." << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->length++;
            cout << "Element " << element << " pushed successfully." << endl;
        }
    }

    // pop operation
    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack is Underflow" << endl;
        }
        else
        {
            int poppedEle = this->arr[this->top];
            this->top--;
            this->length--;
            cout << "Element " << poppedEle << " popped successfully!" << endl;
        }
    }

    // peek/Top operation
    void peek()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty..." << endl;
        }
        else
        {
            cout << "Top Element : " << this->arr[this->top] << endl;
        }
    }

    // Display operation
    void display()
    {
        if (this->top == -1)
        {
            cout << "Stack is Empty..." << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }
    // override base class method
    bool checkEmpty() override
    {
        if (this->top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // isEmpty operation
    void isEmpty()
    {
        this->checkEmpty()
            ? cout << "Stack is Empty..." << endl
            : cout << "Stack is not Empty.." << endl;
    }

    // isFull operation
    bool checkFull() override
    {
        if (this->top == this->capacity - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void isFull()
    {
        this->checkFull()
            ? cout << "Stack is Full..." << endl
            : cout << "Stack is not Full.." << endl;
    }

    // Stack length
    void printLength()
    {
        cout << "Length : " << this->length << endl;
    }

    // override display method
    void displayData() override
    {
        cout << "Stack capacity : " << this->capacity << endl;
        cout << "Stack length : " << this->length << endl;
    }
};