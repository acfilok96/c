// bubble sort
#include<stdio.h>

// swap function (pass by reference)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// first type of bubble sort
void bubble_sort_first_type(int array[], int len_of_array)
{
    for(int i=0; i< len_of_array-1; i++)
    {
        for(int j=0; j< len_of_array-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}


// print array
void print_array(int array[], int len_of_array)
{
    for(int i=0; i< len_of_array; i++)
    {
        printf("%d\t", array[i]);
    }
}

// main function
int main()
{
    int array[] = {65,98,45,98,12,56,78,34,23};
    int len_of_array = sizeof(array)/sizeof(array[0]);

    printf("\nGiven array: \n\n");
    print_array(array, len_of_array);

    bubble_sort_first_type(array, len_of_array);

    printf("\n\nSorted array: \n\n");
    print_array(array, len_of_array);

    printf("\n\n");
    return 0;
}
