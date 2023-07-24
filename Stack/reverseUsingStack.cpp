#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *top = NULL;

class Stack
{

public:
    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
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
            std::cout << "Stack is empty" << std::endl;
            return;
        }
        Node *ptr = top;
        top = top->next;
        delete (ptr);
    }
    void display()
    {
        Node *temp = top;
        while (temp != NULL)
        {
            std::cout << temp->data << endl;
            temp = temp->next;
        }
        std::cout << "--------" << std::endl;
    }
    void reverseLinkedList(Node *current)
    {
        if (current->next == NULL)
        {
            top = current;
            return;
        }
        reverseLinkedList(current->next);
        Node *next = current->next;
        next->next = current;
        current->next = NULL;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.reverseLinkedList(top);
    s.display();
}
