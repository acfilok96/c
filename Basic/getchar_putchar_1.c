#include<stdio.h>
#include<string.h>

int main()
{
    char c;
    while((c = getchar()) != 'z')  //while((c = getchar()) != EOF)
    {
        if((c <= 'Z') && ('A' <= c))
        {
            printf("\n");
            putchar(c);
            printf("\n");
            putchar(c);
        }
    }
    return 0;
}