#include <iostream >
using namespace std;

// Stack using LinkedLists
class Node
{

public:
    int data;
    Node *next;
};

Node *top = nullptr;

void push(int data)
{

    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (top == nullptr)
    {
        top = newNode;
        return;
    }
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if (top == nullptr)
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
    if (top == nullptr)
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    Node *ptr = top;
    while (ptr != nullptr)
    {
        std::cout << ptr->data << "->";
        ptr = ptr->next;
    }
    std::cout << "" << std::endl;
}

int main()
{

    push(1);
    push(2);
    push(3);
    push(4);

    display();
    pop();
    display();
}