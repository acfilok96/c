// Hashing using Linked list



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// structure
typedef struct Node
{
    int data;
    struct Node *next;
}node;

// globally initialization
int key = 10 ;
node* Hash_table[10];

//Insert function
void Insert_element()
{
    int n;
    printf("*****************************");
    printf("\nenter element: ");
    scanf("%d",&n);
    int p=n%key;
    node *tempo = Hash_table[p];
    while(tempo->next!=NULL)
    {
        tempo=tempo->next;
    }
    node *temp=(node* )malloc(sizeof(node));
    temp->data=n;
    temp->next=NULL;
    tempo->next=temp;
    return;
}

// show the table
void Show_table()
{
    printf("\nShow the Table\n");
    for(int i=0;i<key;i++)
    {
        printf("%d --->\t",i);
        node *tempo=Hash_table[i]->next;
        while(tempo!=NULL)
        {
            printf("%d\t",tempo->data);
            tempo = tempo->next;
        }
        printf("\n");
    }
}

//main function
int main()
{
    for(int i=0;i<10;i++)
    {
        Hash_table[i]=(node *)malloc(sizeof(node));
        Hash_table[i]->data=8766223;
        Hash_table[i]->next=NULL;
    }
    while(1)
    {
        Insert_element();
        Show_table();
    }
    return 0;
}

