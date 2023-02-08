#include<stdio.h>
#include<stdlib.h>


//See "Tree.png" in pictures to see the structure of tree

//structure of tree :

                //     1
                //    / \
                //   2   3
                //  / \  /\
                // 4   5 6 7

struct Node 
{
    struct Node *left;
    int data;
    struct Node *right;
};
struct Node *createnode(int data)
{
    struct Node *node;
    node=(struct Node*)malloc(sizeof(struct Node));
    node->left=NULL;
    node->data=data;
    node->right=NULL;
    return node;
}
int main()
{
    //Creating the Root Node
    struct Node *n1 = createnode(1);
    struct Node *n2 = createnode(2);
    struct Node *n3 = createnode(3);


//Linking the Root Node with two Child Nodes
    n1->left=n2;
    n1->right=n3;


//Creating another Nodes
    struct Node *n4 = createnode(4);
    struct Node *n5 = createnode(5);
    struct Node *n6 = createnode(6);
    struct Node *n7 = createnode(7);


//Linking the second node with its child nodes
    n2->left=n4;
    n2->right=n5;


//Linking the Third node with its child nodes
    n3->left=n6;
    n3->right=n7;
return 0;
}