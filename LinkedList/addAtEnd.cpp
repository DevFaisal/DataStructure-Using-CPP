#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *start = NULL;
// Adding Nodes at the End of LinkedList
void addAtEnd(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        Node *current = start;

        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}
// Adding Node at the top of the LinkedList
void addAtStart(int value)
{

    Node *temp = new Node();
    temp->data = value;
    temp->next = start;
    start = temp;
}

void insertAfterSpecidiedElement(int value, int key)
{

    Node *temp = new Node();
    temp->data = value;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        Node *ptr = start;
        while (ptr != NULL)
        {

            if (ptr->data == key)
            {
                temp = ptr;
            }
        }
    }
}
// Deleting by element
void deleteByElement(int key)
{

    if (start->data == key)
    {
        Node *ptr = start;
        start = start->next;
        delete (ptr);
    }
    else
    {

        Node *current = start;
        Node *prev = start->next;

        while (current != NULL)
        {
            prev->next = current->next;
            delete (current);
        }
        prev = current;
        current = current->next;
    }
}

int searchAnElement(int key)
{

    Node *ptr = start;
    ptr = start;

    while (ptr != NULL)
    {

        if (ptr->data == key)
        {
            return 1;
        }
        ptr = ptr->next;
    }
    return 0;
}

void Display()
{
    Node *ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{

    addAtEnd(5);
    addAtEnd(10);
    addAtEnd(15);
    addAtEnd(29);
    addAtStart(1);
    addAtStart(3);
    addAtStart(4);
    Display();
    deleteByElement(15);
    Display();

    return 0;
}
