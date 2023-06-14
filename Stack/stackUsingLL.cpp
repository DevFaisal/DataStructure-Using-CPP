#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *top = NULL;

void push(int data)
{

    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (top == NULL)
    {
        top = newNode;
        return;
    }
    newNode->next = top;
    top = newNode;
}
void pop()
{
    if (top == NULL)
    {
        cout << "LinkedList is empty" << endl;
        return;
    }
    Node *ptr = top;
    top = top->next;
    delete (ptr);
}

void display()
{
    if (top == NULL)
    {
        cout << "LinkedList is empty" << endl;
        return;
    }
    Node *ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}

int main()
{
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    pop();
    push(1);
    display();
}