#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *HEAD = new Node();
    HEAD->data = 25;
    HEAD->next = nullptr;

    Node *current = new Node();
    current->data = 30;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node();
    current->data = 50;
    current->next = nullptr;
    HEAD->next->next = current;

    current = new Node();
    current->data = 70;
    current->next = nullptr;
    HEAD->next->next->next = current;

    Node *ptr = HEAD;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}