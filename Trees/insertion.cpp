#include <iostream>
using namespace std;

class Node
{
public:
    Node *leftChild;
    int data;
    Node *rightChild;
};

Node *head = NULL;

void insertInTree(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->leftChild = NULL;
    newNode->rightChild = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    Node *parent = NULL;

    while (current != NULL)
    {
        parent = current;
        if (value > current->data)
        {
            current = current->rightChild;
        }
        else if (value < current->data)
        {
            current = current->leftChild;
        }
        else
        {
            cout << "Same Value" << endl;
            return;
        }
    }

    if (value > parent->data)
    {
        parent->rightChild = newNode;
    }
    else
    {
        parent->leftChild = newNode;
    }
}

void inorderTraverse(Node *current)
{
    if (current != NULL)
    {
        inorderTraverse(current->leftChild);
        cout << "--" << current->data;
        inorderTraverse(current->rightChild);
    }
}

int main()
{
    insertInTree(80);
    insertInTree(70);
    insertInTree(60);
    insertInTree(50);
    insertInTree(40);
    insertInTree(30);
    insertInTree(20);
    inorderTraverse(head);

    return 0;
}
