#include <iostream>
using namespace std;

int top = -1;
int size = 10;
int stack[10];

void push(int data)
{
    if (top == size - 1)
    {
        cout << "Stack is full" << endl;
        return;
    }

    top++;
    stack[top] = data;
}

void pop(int data)
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    stack[top] = 0;
    top--;
}
void printStack()
{
    int lenght = top;
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = 0; i < lenght + 1; i++)
    {
        cout << stack[i] << " ";
    }
}
int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(2);
    push(3);
    push(4);
    push(5);
    printStack();
}