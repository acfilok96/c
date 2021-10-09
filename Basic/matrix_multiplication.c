#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,k;
    printf("\nenter row and column: \n");
    scanf("%d%d%d",&m,&n,&k);
    printf("\nenter 1st matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\nenter 2nd matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            *(*(c+i)+j)=0;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int l=0;l<k;l++)
            {
                *(*(c+i)+j) = *(*(c+i)+j) + ((*(*(a+i)+l)) * (*(*(b+l)+j)));
            }
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