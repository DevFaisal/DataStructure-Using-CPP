#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

Node *start = NULL;

void addAtFirst(int value)
{

	Node *newNode = new Node();
	newNode->data = value;
	newNode->next = start;
	start = newNode;
}

void Display()
{

	Node *current = start;
	while (current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
	return;
}
int main()
{

	addAtFirst(5);
	addAtFirst(6);
	addAtFirst(7);
	addAtFirst(8);
	addAtFirst(1);
	Display();
}
