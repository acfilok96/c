#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];

    printf("Enter Name: ");
    scanf("%[^\n]%*c",name);

    printf("\nDisplay Name: %s\n\n",name);
}