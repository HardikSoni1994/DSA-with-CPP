#include <iostream>
using namespace std;

// Base Class
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class DynamicMemoryAllocation
{
private:
    Node *head;
    int size;

public:
    DynamicMemoryAllocation()
    {
        head = nullptr;
        size = 0;
    }

    // Node Creation and Appending
    void append(int value)
    {
        Node *newNode = new Node(value); // Dynamic Memory Allocation
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
            cout << "Node with value " << value << " Appended." << endl;
        }
    }

    // Display the linked list
    void display()
    {
        if (head == nullptr)
        {
            cout << endl
                 << "List is Empty." << endl;
            return;
        }
        Node *current = head;
        cout << "Linked List: ";
        while (current != nullptr)
        {
            cout << current->data << "  ";
            current = current->next;
        }
        cout << endl;
    }

    // Insert at Beginning
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << endl
             << "Node with value " << value << " Inserted at Beginning." << endl;
        size++;
    }

    // Search a Node by Value.
    void search(int position)
    {
        Node *current = head;
        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }
        cout << endl
             << "Node at position " << position << " is: " << current->data << endl;
        current = nullptr;
        delete current;

        cout << endl;
    }

    // delete a Node by Value.
    void deleteNode(int position)
    {
        if (head == nullptr)
        {
            cout << endl
                 << "List is Empty." << endl;
            return;
        }
        if (position < 0 || position >= size)
        {
            cout << endl
                 << "Position Invalid." << endl;
            return;
        }

        Node *prev = head;
        Node *current = head;

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

        cout << endl
             << "Node at position " << position << " Deleted." << endl;
        size--;
    }

    // Reverse the linked list
    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next; // Store next node
            current->next = prev;
            prev = current;      
            current = next;
        }
        head = prev;
        cout << endl
             << "Linked List Reversed." << endl;

        display();
    }
};