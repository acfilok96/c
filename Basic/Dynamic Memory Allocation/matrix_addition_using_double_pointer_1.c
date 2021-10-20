#include<stdio.h>
#include<stdlib.h>

// Addition Function
int **add(int **a, int **b, int m, int n)
{
    int **c;
    c=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        // c[i]=(int *)malloc(n*sizeof(int));
        *(c+i)=(int *)malloc(n*sizeof(int));
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    return c;
}


int main()
{
    int **a, **b, **d;
    int m,n;
    printf("enter m and n (the order of matrix): ");
    scanf("%d%d",&m,&n);

    // Create First Matrix
    a=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        // a[i]=(int *)malloc(n*sizeof(int));
        *(a+i)=(int *)malloc(n*sizeof(int));
    }

    // Enter First Matrix
    printf("Enter First Matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // scanf("%d",&a[i][j]);
            scanf("%d",(*(a+i)+j) );
        }
    }

    // Create Second Matrix
    b=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        // b[i]=(int *)malloc(n*sizeof(int));
        *(b+i)=(int *)malloc(n*sizeof(int));
    }

    // Enter Second Matrix
    printf("Enter Second Matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // scanf("%d",&b[i][j]);
            scanf("%d",(*(b+i)+j) );
        }
    }

    // Calling Function
    d=add(a,b,m,n);

    // Display Resultant Matrix
    printf("Display Addition Matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // printf("%d\t",d[i][j]);
            printf("%d\t",*(*(d+i)+j) );
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(d);
    return 0;

}