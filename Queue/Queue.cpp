#include <iostream>
using namespace std;

class heap
{
public:
    int arr[50];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deleltefromheap()
    {
        if (size == 0)
        {
            std::cout << "Heap is empty" << std::endl;
            return;
        }
        // Step 1 : Puts last element to the first index
        arr[1] = arr[size];

        // Step 2 : Remove last element
        size--;

        // Step 3 : Took Root Node to its Current Position

        int i = 1;
        while (i < size)
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;

            if (leftChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[i], arr[leftChild]);
                i = leftChild;
            }
            else if (rightChild < size && arr[i] < arr[rightChild])
            {
                swap(arr[i], arr[rightChild]);
                i = rightChild;
            }
            else
            {
                return;
            }
        }
    }
    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            std::cout << arr[i] << std::endl;
        }
        std::cout << "-------------------" << std::endl;
    }
};

int main()
{

    heap s;
    s.insert(50);
    s.insert(55);
    s.insert(53);
    s.insert(52);
    s.insert(54);
    s.display();
    s.deleltefromheap();
    s.display();
}