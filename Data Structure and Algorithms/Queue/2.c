#include<stdio.h>

#define size 3

int array[size];
int front=-1;
int rear=-1;

void Enqueue()
{
    if(rear==size-1)
    {
        printf("Queue is full\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    int n;
    printf("Enter element to insert into Queue: ");
    scanf("%d",&n);

    rear++;
    array[rear]=n;

    printf("%d elmenet enqueued\n",n);
    printf("\n\n");
    // printf("Enqueue-->front:  %d rear:  %d\n\n",front,rear);
    return;
}

void Dequeue()
{
    if(front==-1 || rear<front)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("%d element Dequeued\n",array[front]);
    front++;
    printf("\n\n");
    // printf("Dequeue-->front:  %d rear:  %d\n\n",front,rear);
    return;
}

void Display()
{
    if(rear<front || front==size)
    {
        printf("Queue is empty\n\n");
        return;
    }
    printf("Display the elements:- \n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
}


int main()
{
    Enqueue();
    Display();
    Enqueue();
    Display();
    Enqueue();
    Display();
    Enqueue();
    Display();
    printf("\n**************************************\n");
    //--------
    Dequeue();
    Display();
    Dequeue();
    Display();
    Dequeue();
    Display();
    Dequeue();
    Display();
    Dequeue();
    Display();
}