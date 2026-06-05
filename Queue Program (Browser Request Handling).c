#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int request)
{
    if(rear == MAX - 1)
    {
        printf("Queue Full\n");
    }
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = request;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        printf("Processing Request %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1 || front > rear)
    {
        printf("No Requests\n");
        return;
    }

    printf("Pending Requests:\n");

    for(i = front; i <= rear; i++)
    {
        printf("Request %d\n", queue[i]);
    }
}

int main()
{
    enqueue(101);  // HTML
    enqueue(102);  // CSS
    enqueue(103);  // Image

    display();

    dequeue();

    display();

    return 0;
}
