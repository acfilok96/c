/*
Here we created a array of size 100,
the operation are given below:-

choose 1 for push
choose 2 for pop
choose 3 for print
choose 4 for check isFull
choose 5 for check isEmpty
*/


#include<stdio.h>

#define size 100
int array[size];
int top=-1;

void push()
{
    if(top==size-1)
    {
        printf("stack is full\n");
        return;
    }
    int n;
    printf("enter element which you want to push ino stack: ");
    scanf("%d",&n);
    top++;
    array[top]=n;
    printf("element is pushed\n");
    return;
}

void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("%d is popped\n",array[top]);
    top--;
    return;
}

void print()
{
    if(top==-1)
    {
        printf("stack is empty and nothing have to print\n");
        return;
    }
    printf("display the stack: \n");
    for(int i=0;i<=top;i++)
    {
        printf("%d\t",array[i]);
    }
    return;
}

void isEmpty()
{
    if(top==-1)
    {
        printf("stack is empty");
        return;
    }
    printf("stack is not empty\n");
    return;
}

void isFull()
{
    if(top==size-1)
    {
        printf("stack is full\n");
        return;
    }
    printf("stack is not full\n");
    return;
}

int main()
{
    int p;
    while(1)
    {
        printf("\n\nchoose 1 for push\nchoose 2 for pop\nchoose 3 for print\nchoose 4 for check isFull\nchoose 5 for check isEmpty\n");
        printf("\nchoose: ");
        scanf("%d",&p);
        switch(p)
        {
            case 1:{push();break;}
            case 2:{pop();break;}
            case 3:{print();break;}
            case 4:{isFull();break;}
            case 5:{isEmpty();break;}
            default:{printf("choose correct option\n");break;}
        }
    }
}
