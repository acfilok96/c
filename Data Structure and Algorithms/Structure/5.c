// Pointer Thinking in Structure

#include<stdio.h>

typedef struct person
{
    char name[50];
    int age;
    float weight;
}person;

int main()
{
    person *person_ptr, personk;

    person_ptr = &personk;

    printf("Enter Name: ");
    scanf("%[^\n]%*c",person_ptr->name);

    printf("Enter Age: ");
    scanf("%d",&person_ptr->age);

    printf("Enter Weight: ");
    scanf("%f",&person_ptr->weight);

    printf("Displaying . . .\n");
    printf("Name: %s\n",person_ptr->name);
    printf("Age: %d\n",person_ptr->age);
    printf("Weight: %f\n",person_ptr->weight);

    printf("\nDisplaying . . .\n");
    printf("Name: %s\n",personk.name);
    printf("Age: %d\n",personk.age);
    printf("Weight: %f\n",personk.weight);

    return 0;
}