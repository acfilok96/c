#include<stdio.h>
#include<string.h>

int main()
{
    char op;
    int a,b;
    printf("enter a and b: \n");
    scanf("%d%d",&a,&b);

    printf("enter operator( +, -, *, / ): ");
    scanf("%s", &op);

    switch(op)
    {
        case '+':
        {
            int output = a + b;
            printf("\n%d '+' %d : %d\n",a,b,output);
            break;
        }

        case '-':
        {
            int output = a - b;
            printf("\n%d '+' %d : %d\n",a,b,output);
            break;
        }

        case '*':
        {
            int output = a * b;
            printf("\n%d '*' %d : %d\n",a,b,output);
            break;
        }

        default:
        printf("\nError! operator is not correct\n");
    }
    return 0;
}