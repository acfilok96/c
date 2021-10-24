#include<stdio.h>
#include<stdlib.h>

struct BinarySearchTree
{
    int data;
    struct BinarySearchTree *left;
    struct BinarySearchTree *right;
};

struct BinarySearchTree *Insert(struct BinarySearchTree *root, int value)
{
    if(root==NULL)
    {
        root=(struct BinarySearchTree *)malloc(sizeof(struct BinarySearchTree));
        if(root==NULL)
        {
            printf("Memory Error\n");
            return 0;
        }
        else
        {
            root->data=value;
            root->left=NULL;
            root->right=NULL;
        }
    }
    else
    {
        if(value < root->data)
        {
            root->left = Insert(root->left, value);
        }
        else if(value > root->data)
        {
            root->right = Insert(root->right, value);
        }
    }
    return root;
}

int FindMinElement(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        printf("No Element\n");
        return 0;
    }
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}

int FindMaxElement(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        printf("No Element\n");
        return 0;
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root->data;
}

int SumOfElement(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (root->data + SumOfElement(root->left) + SumOfElement(root->right));
}

int SumOfElementOfLeftSideNode(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (root->data+SumOfElementOfLeftSideNode(root->left));
}

int SumOfElementOfRightSideNode(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (root->data+SumOfElementOfRightSideNode(root->right));
}

void PreOrderTraversal(struct BinarySearchTree *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

void InOrderTraversal(struct BinarySearchTree *root)
{
    if(root!=NULL)
    {
        InOrderTraversal(root->left);
        printf("%d\t",root->data);
        InOrderTraversal(root->right);
    }
}

void PostOrderTraversal(struct BinarySearchTree *root)
{
    if(root!=NULL)
    {
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        printf("%d\t",root->data);
    }
}

struct BinarySearchTree *Predecessor(struct BinarySearchTree *root)
{
    root=root->left;
    if(root==NULL)
    {
        printf("Memory Error\n");
        return NULL;
    }
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct BinarySearchTree *Sucessor(struct BinarySearchTree *root)
{
    root=root->right;
    if(root==NULL)
    {
        printf("Memory Error\n");
        return NULL;
    }
    while(root->left != NULL)
    {
        root=root->left;
    }
    return root;
}

int IsBST_1(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->left != NULL && root->left->data > root->data)
    {
        return 0;
    }
    if(root->right != NULL && root->right->data < root->data)
    {
        return 0;
    }
    if(!IsBST_1(root->left) || !IsBST_1(root->right))
    {
        return 0;
    }
    return 1;
}

int IsBST_2(struct BinarySearchTree *root)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->left != NULL && FindMaxElement(root->left) > root->data)
    {
        return 0;
    }
    if(root->right != NULL && FindMinElement(root->right) < root->data)
    {
        return 0;
    }
    if(!IsBST_2(root->left) || !IsBST_2(root->right))
    {
        return 0;
    }
    return 1;
}



int main()
{
    struct BinarySearchTree *head=NULL;
    head = Insert(head, 34);
    head = Insert(head, 1);
    head = Insert(head, 16);
    head = Insert(head, 9);
    head = Insert(head, 56);
    head = Insert(head, 78);
    PreOrderTraversal(head);
    int min_element = FindMinElement(head);
    printf("\nMinimum Element: %d\n",min_element);
    int max_element = FindMaxElement(head);
    printf("\nMaximum Element: %d\n",max_element);
    int sum_of_element = SumOfElement(head);
    printf("\nSum Of All Element: %d\n",sum_of_element);
    int Sum_Of_Element_Of_Right_Side_Node = SumOfElementOfRightSideNode(head);
    printf("\nSum Of Element Of Right Side Node : %d\n",Sum_Of_Element_Of_Right_Side_Node);
    int Sum_Of_Element_Of_Left_Side_Node = SumOfElementOfLeftSideNode(head);
    printf("\nSum Of Element Of Left Side Node : %d\n",Sum_Of_Element_Of_Left_Side_Node);
    // int is_bst = IsBST_1(head);
    int is_bst = IsBST_2(head);
    if(is_bst)
    {
        printf("\nThis Tree Is Binary Search Tree\n");
    }
    else
    {
        printf("\nThis Tree Is NOT Binary Search Tree\n");
    }
    printf("\n");
    return 0;
}