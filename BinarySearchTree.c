#include<stdio.h>
#include<stdlib.h>

// Structure of Tree
//      10
//     /  \
//    5    15
//   / \   / \
//  3   6 12 20
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};
struct Node *createnode(int data)
{
    struct Node *node;
    node=(struct Node *)malloc(sizeof(struct Node));
    node->left=NULL;
    node->data=data;
    node->right=NULL;
    return node;
}
int IsBst(struct Node *root)
{
    static struct Node *prev=NULL;
    if(root!=NULL)
    {
        if(!IsBst(root->left))
        {
            return 0;
        }

        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return IsBst(root->right);
    }
    else
    {
        return 1;
    }
}
int main()
{
    struct Node *n=createnode(10);
    struct Node *n1=createnode(5);
    struct Node *n2=createnode(15);
    struct Node *n3=createnode(3);
    struct Node *n4=createnode(6);
    struct Node *n5=createnode(12);
    struct Node *n6=createnode(20);

//Linking the nodes
    n->left=n1;
    n->right=n2;
    n1->left=n3;
    n1->right=n4;
    n2->left=n5;
    n2->right=n6;

    if(IsBst(n))
    {
        printf("\nYes,This is a Binary Search Tree\n");
    }
    else
    {
        printf("\nThis is not a Binary Search Tree\n");
    }
return 0;
}