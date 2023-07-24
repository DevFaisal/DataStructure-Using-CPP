#include <iostream>
using namespace std;

class stack
{

    int *arr;
    int top;
    int size;

public:
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            std::cout << "OverFlow" << std::endl;
            return;
        }
        top++;
        arr[top] = value;
    }
    void pop()
    {
        if (top == -1)
        {
            std::cout << "Stack is empty" << std::endl;
            return;
        }
        top--;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            std::cout << arr[i] << std::endl;
        }
        std::cout << "----------" << std::endl;
    }
};

int main()
{

    stack s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.display();
}