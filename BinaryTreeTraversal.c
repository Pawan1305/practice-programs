#include<stdio.h>
#include<stdlib.h>

//structure of tree :

                //     1
                //    / \
                //   2   3
                //  / \  /\
                // 4   5 6 7
struct Node 
{
    struct Node* left;
    int data;
    struct Node* right;    
};
struct Node* createnode(int data)
{
    struct Node* node;
    node = (struct Node*)malloc(sizeof(struct Node));
    node->left=NULL;
    node->data=data;
    node->right=NULL;
    return node; 
}
void preorder(struct Node* root)
{
    if(root!=NULL)
    {
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
    }
}
void inorder(struct Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void postorder(struct Node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
int main()
{
    struct Node *n1=createnode(1);
    struct Node *n2=createnode(2);
    struct Node *n3=createnode(3);

    n1->left=n2;
    n1->right=n3;

    struct Node *n4=createnode(4);
    struct Node *n5=createnode(5);
    struct Node *n6=createnode(6);
    struct Node *n7=createnode(7);

    n2->left=n4;
    n2->right=n5;

    n3->left=n6;
    n3->right=n7;

printf("\nPreOrder Traversal\n");
    preorder(n1);

printf("\nInOrder Traversal\n");
    inorder(n1);

printf("\nPostOrder Traversal\n");
    postorder(n1);
return 0;
}