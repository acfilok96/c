#include<stdio.h>
#include<string.h>

int length_of_string_function(char a[])
{
    int k=0;
    while(a[k]!='\0')
    {
        k=k+1;
    }
    return k;
}

int main()
{
    char string_1[100];
    printf("enter string: ");
    scanf("%s",string_1);
    printf("\nGiven string: %s",string_1);
    int len_of_string = length_of_string_function(string_1);
    printf("\nlength of string: %d\n\n",len_of_string);
    return 0;
}