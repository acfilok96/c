#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *top=NULL;

void push()
{
    int value;
    printf("enter element: ");
    scanf("%d",&value);
    node *temp=(node *)malloc(sizeof(node));
    temp->data=value;
    temp->next=NULL;
    if(top!=NULL)
    {
        temp->next=top;
    }
    top=temp;
    printf("element inserted\n");
}

void pop()
{
    if(top==NULL)
    {
        printf("stack empty-->");
    }
    else
    {
        node *temp=top;
        top=temp->next;
        free(temp);
        printf("element popped\n");
    }
}

void display()
{
    node *temp=top;
    if(temp==NULL)
    {
        printf("stack empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        push();
        display();
        pop();
        display();
    }
}