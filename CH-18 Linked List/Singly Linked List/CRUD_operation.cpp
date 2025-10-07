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

int main()
{
    LinkedList l1; // creating object of class (LinkedList)

    int choice, data, position;

    do
    {
        cout << endl;
        cout << "Press 1 for Insert from beginning.." << endl;
        cout << "Press 2 for Insert from ending.." << endl;
        cout << "Press 3 for Insert At any position.." << endl;
        cout << "Press 4 for Update" << endl;
        cout << "Press 5 for Delete from beginning.." << endl;
        cout << "Press 6 for Delete from ending.." << endl;
        cout << "Press 7 for Delete from At any position.." << endl;
        cout << "Press 8 for Display all Nodes.." << endl;
        cout << "Press 9 for Node Length.." << endl;
        cout << "Press 0 for Exit.." << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Element : ";
            cin >> data;
            l1.insertFromBeginning(data);
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> data;
            l1.instertFromEnding(data);
            break;
        case 3:
            cout << "Enter Element : ";
            cin >> data;
            cout << "Enter Position : ";
            cin >> position;
            l1.insertAtPosition(data, position);
            break;
        case 4:
            cout << "Enter Element : ";
            cin >> data;
            cout << "Enter Position : ";
            cin >> position;
            l1.update(data, position);
            break;

        case 5:
            l1.deleteFromBeginning();
            break;

        case 6:
            l1.deleteFromEnding();
            break;

        case 7:
            cout << "Enter Position : ";
            cin >> position;
            l1.deleteAnyPosition(position);
            break;

        case 8:
            cout << endl
                 << "Display All Nodes : ";
            l1.displayAllNodes();
            break;
        case 9:
            cout << endl
                 << "Length : " << l1.length() << endl;
            break;
            ;
        case 0:
            cout << endl
                 << "Exit.." << endl
                 << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice." << endl;
        }
    } while (choice != 0);
}