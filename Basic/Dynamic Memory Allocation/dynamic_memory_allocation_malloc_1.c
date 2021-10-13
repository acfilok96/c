// Dynamic Memory Allocation
// Malloc function: Generally it use to assign memory
// In malloc, initially it's assign garbage value

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // malloc 
    int *array;
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);

    // syntax
    array=(int *)malloc(n*sizeof(int));

    // initially it's initialize by garbege value
    for(int i=0;i<n;i++)
    {
        // printf("%d\n",array[i]);
        printf("%d\n",*(array+i));
    }

    for(int i=0;i<n;i++)
    {
        printf("enter element: ");
        // scanf("%d",&array[i]);
        scanf("%d",(array+i));
    }

    printf("print array\n");
    for(int i=0;i<n;i++)
    {
        // printf("%d\n",array[i]);
        printf("%d\n",*(array+i));
    }
    
    // it assign by garbage value if we does not assign memory
    printf("print array\n");
    for(int i=0;i<n+10;i++)
    {
        // printf("%d\n",array[i]);
        printf("%d\n",*(array+i));
    }
    return 0;
}