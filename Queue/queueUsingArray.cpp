#include <iostream>
using namespace std;

#define n 10

class queue
{

    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int num)
    {
        if (back == n - 1)
        {
            std::cout << "overflow" << std::endl;
            return;
        }
        back++;
        arr[back] = num;

        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (back == -1 || front > back)
        {
            std::cout << "no element" << std::endl;
            return;
        }
        front++;
    }
    void peek()
    {
        if (back == -1 || front > back)
        {
            std::cout << "no element" << std::endl;
            return;
        }
        std::cout << "Peek elemenet : " << arr[front] << std::endl;
    }
    bool isempty()
    {
        if (back == -1 || front > back)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = front; i <= back; i++)
        {
            std::cout << arr[i] << "<--";
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
    s.enqueue(40);
    s.enqueue(50);
    s.enqueue(60);
    s.display();
    s.dequeue();
    s.display();
}