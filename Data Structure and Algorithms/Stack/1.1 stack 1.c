#include<stdio.h>
#include<stdlib.h>

typedef struct ArrayStack
{
    int top;
    int capacity;
    int *array;
}stack;

stack *CreateStack()
{
    stack *s=(stack *)malloc(sizeof(stack));
    if(!s)
    {
        return NULL;
    }
    s->capacity=10;
    s->top=-1;
    s->array = (int *)malloc(sizeof(int));
    if(!(s->array))
    {
        return NULL;
    }
    return s;
}

int IsEmptyStack(stack *s)
{
    return (s->top == -1);
}

int IsFullStack(stack *s)
{
    return (s->top == (s->capacity) -1);
}

void push(stack *s)
{
    if(IsFullStack(s))
    {
        printf("stack overflow\n");
        return;
    }
    int data;
    printf("enetr data: ");
    scanf("%d",&data);
    s->array[++s->top]=data;
}

int pop(stack *s)
{
    if(IsEmptyStack(s))
    {
        printf("stack is Empty\n");
    }
    return s->array[(s->top)--];
}

void PrintStack(stack *s)
{
    int i=0;
    // printf("--->%d---->\n",s->top);
    while(i!=s->top+1)
    {
        printf("%d\t",s->array[i]);
        i=i+1;
    }
    printf("\n");
}

void DeleteStack(stack *s)
{
    if(s)
    {
        if(s->array)
        {
            free(s->array);
        }
        free(s);
    }
}


int main()
{
    stack *s;
    s=CreateStack();
    push(s);
    push(s);
    push(s);
    push(s);
    PrintStack(s);
    int k = pop(s);
    printf("popped element: %d\n",k);
    PrintStack(s);
    return 0;
}