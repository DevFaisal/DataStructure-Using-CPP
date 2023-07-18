#include <iostream>
using namespace std;

#define n 100

class Stack
{

    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No elemenet to POP" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "no element in Stack" << endl;
            return 0;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
}