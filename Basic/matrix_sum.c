#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n;
    printf("\nenter row and column: \n");
    scanf("%d%d",&m,&n);
    printf("\nenter 1st matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\nenter 2nd matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    printf("\ndisplay the sum of two matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",*(*(c+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}