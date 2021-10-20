#include<stdio.h>
#include<stdlib.h>

typedef struct person
{
    int age;
    float weight;
    char name[20];
}person;

int main()
{
    person *ptr;

    printf("Enter The Number Of Persons: ");
    int n;
    scanf("%d",&n);

    ptr = (person *)malloc(n*sizeof(person));


    for(int i=0;i<n;i++)
    {
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }

    printf("Print Details:- \n");
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
    }
}