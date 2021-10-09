#include<stdio.h>

int main()
{
    int a[10][10],n,m;
    printf("\nenter row and column: \n");
    scanf("%d%d",&m,&n);
    printf("enter matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // scanf("%d",&a[i][j]);
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\nPrint matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            // printf("%d\t",a[i][j]);
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}