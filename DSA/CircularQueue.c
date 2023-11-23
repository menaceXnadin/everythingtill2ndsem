#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 5
#define TRUE 1
int queue[MAXSIZE];
int front = -1;
int rear = -1;
int isempty()
{
    if (rear == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if ((rear + 1) % MAXSIZE == front)
        return 1;
    else
        return 0;
}
void enqueue(int data)
{
    if (isfull())
        printf("Queue is full.\n");
    else
    {
        if (isempty())
        {
            rear = front = 0;
            queue[0] = data;
        }
        else
        {
            rear = (rear + 1) % MAXSIZE;
            queue[rear] = data;
        }
    }
}
void dequeue()
{
    int data;
    if (isempty())
        printf("Queue is empty.\n");
    else
    {
        data = queue[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAXSIZE;
        printf("Removed element: %d\n", data);
    }
}
void peek()
{
    if (isempty())
        printf("Queue is empty.\n");
    else
        printf("Element at front of the queue: %d\n", queue[front]);
}
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(6);
    enqueue(8);
    peek();
    printf("front = %d\n", front);
    printf("rear = %d", rear);
    // enqueue(9);
    // dequeue();
    // enqueue(7);

    return 0;
}
