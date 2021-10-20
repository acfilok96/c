#include<stdio.h>

int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

int main()
{
    int i,j,k;
    int n;
    printf("Enter n (Order Of Squre Matrix): ");
    scanf("%d",&n);


    int w[n][n],s[n][n];
    printf("Enter Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&w[i][j]);
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s[i][j]=0;
            }
            else if(w[i][j]==0 && i!=j)
            {
                s[i][j]=3e+4;
            }
            else
            {
                s[i][j]=w[i][j];
            }
        }
    }


    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                s[i][j]=min(s[i][j], s[i][k]+s[k][j]);
            }
        }
    }


    printf("Display The Resultant Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}