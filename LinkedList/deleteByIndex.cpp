#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *start = NULL;

void deleteByIndex(int index)
{

    if (start == NULL)
    {
        cout << "Linked List Empty";
        return;
    }

    if (index == 0)
    {
        Node *ptr = start;
        start = start->next;
        delete (ptr);
    }

    Node *current = start;
    for (int i = 0; i < index - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL || current->next == NULL)
    {
        return;
    }
}

int main(){
    
}