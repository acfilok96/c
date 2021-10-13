// Dynamic Memory Allocation
// Calloc function: Generally it use to assign memory
// Difference between malloc and calloc is default value in calloc memory is zero, while in malloc, it's garbage value


#include<stdio.h>
#include<stdlib.h>

int main()
{
    // calloc 
    int *array;
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);

    // syntax
    array=(int *)calloc(n,sizeof(int));

    // initially it's initialize by zero
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