#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

class stack
{
public:
    Node *top = NULL;

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
        if (top == NULL)
        {
            std::cout << "Stack is empty" << std::endl;
            return;
        }
        Node *temp = top;
        while (temp != NULL)
        {
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.display();
}
