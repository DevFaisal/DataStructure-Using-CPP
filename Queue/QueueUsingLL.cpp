#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class queue
{
    Node *front;
    Node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void enqueue(int num)
    {
        Node *newNode = new Node();
        newNode->data = num;
        newNode->next = NULL;

        if (front == NULL)
        {
            front = newNode;
            back = newNode;
            return;
        }
        back->next = newNode;
        back = newNode;
    }
    void dequeue()
    {
        if (front == nullptr)
        {
            std::cout << "no element" << std::endl;
            return;
        }
        Node *ptr = front;
        front = front->next;
        delete ptr;
    }
    void peek()
    {
        if (front == nullptr)
        {
            std::cout << "empty" << std::endl;
            return;
        }
        std::cout << front->data << std::endl;
    }
    void display()
    {

        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << "<--";
            temp = temp->next;
        }
        std::cout << "" << std::endl;
    }
};

int main()
{
    queue s;
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.display();
    s.dequeue();
    s.display();
}
