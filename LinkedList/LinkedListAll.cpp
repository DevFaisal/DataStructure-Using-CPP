#include <iostream>
using namespace std;
// Created a class for LinkedList
class Node
{
public:
	int data;
	Node *next;
};

Node *start = NULL;

void addAtEnd(int value)
{

	Node *newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;

	if (start == NULL)
	{
		start = newNode;
		return;
	}

	else
	{

		Node *ptr = start;
		while (ptr->next != NULL)
		{

			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
}

// Function to Print the LinkedList
void Display()
{

	if (start == NULL)
	{
		cout << "LinkesList is empty";
	}
	else
	{
		Node *ptr = start;
		cout << "LinkedList " << endl;
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
}

// Delete by Index
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

	for (int i = 0; i < index - 1; i++)
	{

		current = current->next;
	}
	Node *deletingNode = current->next;

	if (current == NULL || current->next == NULL)
	{
		return;
	}
}

int main()
{

	addAtEnd(10);
	addAtEnd(20);
	addAtEnd(30);
	addAtEnd(40);
	Display();
	deleteByIndex(8);
	Display();
}
