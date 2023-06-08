#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *start = NULL;

void addElementAtStart(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = start;
    start = temp;
}

void printList()
{
    Node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void deleteMiddle()
{
    if (start == NULL || start->next == NULL)
    {
        // If the list is empty or has only one element, there is no middle element to delete
        return;
    }

    Node *fast = start;
    Node *slow = start;
    Node *prev = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (prev != NULL)
    {
        prev->next = slow->next;
    }
    else
    {
        start = slow->next;
    }

    delete slow;
}

int main()
{
    addElementAtStart(5);
    addElementAtStart(4);
    addElementAtStart(3);
    addElementAtStart(2);
    addElementAtStart(1);

    cout << "Initial list: ";
    printList();

    deleteMiddle();

    cout << "List after deleting middle node: ";
    printList();

    return 0;
}
