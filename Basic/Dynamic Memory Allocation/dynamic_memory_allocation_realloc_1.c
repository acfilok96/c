// Dynamic Memory Allocation
// Realloc function: Generally it use to reassign memory for same pointer.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // realloc 
    int *array;
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);

    // syntax
    array=(int *)malloc(n*sizeof(int));
    // array=(int *)calloc(n,sizeof(int));

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
    
    int m;
    printf("enter size you want: ");
    scanf("%d",&m);

    // it reassign the memory for m node
    // syntax
    array=(int *)realloc(array, m*sizeof(int));

    for(int i=0;i<m;i++)
    {
        printf("enter element: ");
        // scanf("%d",&array[i]);
        scanf("%d",(array+i));
    }

    printf("print array\n");
    for(int i=0;i<m;i++)
    {
        // printf("%d\n",array[i]);
        printf("%d\n",*(array+i));
    }
    return 0;
}