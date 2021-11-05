// Doubly Linked List
// 1) Insertion( insert at last, insert at begin)
// 2) Lenth.
// 3) Display.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void append_at_last()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("enter node data(to enter in last node): ");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        root = temp;
        return;
    }
    else
    {
        struct node *ptr;
        ptr = root;
        while (ptr->right != NULL)
        {
            ptr = ptr->right;
        }
        ptr->right = temp; // right link connect
        temp->left = ptr;  // left link connect
        return;
    }
}

void add_at_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter node data(to enter in first node): ");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        root = temp;
        return;
    }
    else
    {
        temp->right = root; // right link connect
        root->left = temp;  // left link connect
        root = temp;        // change root
        return;
    }
}

int length()
{
    struct node *temp;
    temp = root;
    int count = 0;
    while (temp != NULL)
    {
        count = count + 1;
        temp = temp->right;
    }
    return count;
}

void display()
{
    struct node *temp;
    temp = root;
    if (temp == NULL)
    {
        printf("No element\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->right;
    }
    printf("\n");
    return;
}

int main()
{
    int n;
    while (1)
    {
        printf("enter \n1 for append_at_last\n2 for display\n3 for length\n4 for add_at_begin\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            {
                append_at_last();
                printf("******************************************\n");
                break;
            }
            case 2:
            {
                printf("Display the elements: \n");
                display();
                printf("******************************************\n");
                break;
            }
            case 3:
            {
                int count = length();
                printf("\nlength: %d\n", count);
                printf("******************************************\n");
                break;
            }
            case 4:
            {
                add_at_begin();
                printf("******************************************\n");
                break;
            }
            default:
            {
                printf("enter correct input\n");
                printf("******************************************\n");
                break;
            }
        }
    }
    return 0;
}