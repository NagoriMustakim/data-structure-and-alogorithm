// queue: A queue is a linear data structure that follows the FIFO (First-In-First-Out)
// types: [singly queue, circular queue, doubly queue]
#include "iostream"
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        this->front = 0;
        this->rear = 0;
    }
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "queue overflow" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void dequeue()
    {
        if (front == rear)
        {
            cout << "queue underflow" << endl;
        }
        else
        {
            front++;
        }
    }
    int fron()
    {
        if (front >= 0)
        {
            return arr[front];
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    Queue q(5);
    q.enqueue(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(6);
    cout << q.fron();
    return 0;
}