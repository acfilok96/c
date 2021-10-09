#include<stdio.h>
int top = 0;
#define max_value 20

void push(int s[], int value)
{
    if(top==max_value)
    {
        printf("stack is full\n");
        return;
    }
    s[top]=value;
    printf("element is pushhed!\n");
    top=top+1;
}


void pop()
{
    if(top<0)
    {
        printf("stack empty\n");
        return;
    }
    top=top-1;
    printf("element popped from stack!\n");
}


void display(int s[])
{
    if(top<=0)
    {
        printf("stack is empty! and nothing to show!\n");
        return;
    }
    printf("element is stack: \n");
    for(int i=0;i<top;i++)
    {
        printf("%d\t",s[i]);
    }
    printf("\n");
}

int main()
{
    int stack[max_value];
    push(stack, 10);
    display(stack);
    push(stack, 56);
    display(stack);
    pop();
    display(stack);
    pop();
    display(stack);
    display(stack);
    return 0;
}