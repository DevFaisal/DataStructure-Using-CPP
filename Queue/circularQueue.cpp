#include <iostream>
using namespace std;

class queue
{

    int *arr;
    int front;
    int rear;
    int size;

public:
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }
    void enQueue(int value)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % size - 1))
        {
            std::cout << "Queue is full" << std::endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    void deQueue()
    {
        if (front == -1)
        {
            std::cout << "Queue is empty" << std::endl;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        if (front == -1)
        {
            std::cout << "empty Queue" << std::endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << "<--";
        }
        std::cout << "" << std::endl;
    }
};

int main()
{

    queue qr(5);
    qr.enQueue(1);
    qr.enQueue(2);
    qr.enQueue(3);
    qr.enQueue(4);
    qr.enQueue(5);
    qr.enQueue(3); 
    qr.display();
    qr.deQueue();
    qr.deQueue();
    qr.display();
}