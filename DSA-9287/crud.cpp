#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // parameterized constructor
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        this->head = NULL;
        this->count = 0;
    }

    void insertFromBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }

    void instertFromEnding(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL || this->count == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            Node *ptr = this->head;

            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }

    void insertAtPosition(int data, int position)
    {
        if (position < 0 && position > count)
        {
            cout << endl
                 << "position Invalid.." << endl;
        }

        Node *NewNode = new Node(data);

        if (this->head == NULL || this->count == 0)
        {
            NewNode->next = this->head;
            this->head = NewNode;
        }
        else
        {
            if (position > 0 && position < count)
            {
                Node *ptr = this->head;

                for (int i = 0; i < position - 1; i++)
                {
                    ptr = ptr->next;
                }
                NewNode->next = ptr->next;
                ptr->next = NewNode;
            }
            else
            {
                cout << endl
                     << "Invalid Position..." << endl;
            }
        }
        this->count++;
    }

    void update(int data, int position)
    {
        if (head == NULL || count == 0)
        {
            cout << endl
                 << "List is empty.." << endl;
            return;
        }

        if (position < 0 && position > count)
        {
            cout << endl
                 << "position Invalid.." << endl;
        }

        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = data;
        ptr = NULL;
    }

    void deleteFromBeginning()
    {
        if (head == NULL || count == 0)
        {
            cout << endl
                 << "List is empty.." << endl;
            return;
        }
        Node *ptr = this->head;
        this->head = this->head->next;
        delete ptr;
        ptr = NULL;
        this->count--;
    }

    void deleteFromEnding()
    {
        if (head == NULL || count == 0)
        {
            cout << endl
                 << "List is empty.." << endl;
            return;
        }
        Node *ptr = this->head;

        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = NULL;
        ptr = NULL;
        this->count--;
    }

    void deleteAnyPosition(int position)
    {
        if (head == NULL || count == 0)
        {
            cout << endl
                 << "List is empty.." << endl;
            return;
        }

        if (position < 0 && position > count)
        {
            cout << endl
                 << "position Invalid.." << endl;
        }

        Node *prev = this->head;
        Node *current = this->head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }
        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }
        prev->next = current->next;
        delete current;
        current = NULL;

        prev = NULL;
        delete prev;
        this->count--;
    }

    void displayAllNodes()
    {
        Node *ptr = this->head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl
             << endl;
    }

    int length()
    {
        return count;
    }
};

int linear_searching(int arr[], int n)
{
    int target;

    cout << endl
         << "Enter any target element : ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (target = arr[i])
        {
            index = i;
        }
    }
    return index;
}

void selectionSort(int[], int);

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int swap = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = swap;
    }

    cout << "Array after selection sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}