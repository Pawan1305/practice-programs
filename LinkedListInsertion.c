#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
struct Node * insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct Node * insertAtInd(struct Node *head, int data, int ind)
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=ind-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node * insertAtEnd(struct Node * head,int data)
{
    struct Node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node * insertAtNode(struct Node* head,struct Node* node,int data)
{
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=node)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


int showdata(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",(*ptr).data);
        ptr=ptr->next;
    }
    return 0;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
fourth = (struct Node*)malloc(sizeof(struct Node));

head->data=10;
head->next = second;

second->data = 12;
second->next = third;

third->data = 15;
third->next = fourth;

fourth->data = 20; 
fourth->next = NULL;

// head=insertAtFirst(head,52);
// showdata(head);
// printf("\n\n");
// head=insertAtInd(head,55,1);
// showdata(head);
// head=insertAtEnd(head,55);
head=insertAtNode(head,second,56);
showdata(head);
return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
// int DynamicDataAl(int size,int arr[])
// {
//     int i;
//     for(i=0;i<size;i++)
//     {
//         struct node *arr[i];
//         arr[i]=(struct node*)malloc(sizeof(struct node));
//         printf("Enter element %d : ",i+1);
//         scanf("%d",&arr[i]->data);
//         arr[i]->next=arr[i+1];
        
//     }
//     return 0;
// }
int showdata(struct node *ptr)
{
    while(ptr!=NULL)
    {
        int i=1;
        printf("Element %d : %d",i+1,ptr->data);
        ptr=ptr->next;
        i++;
    }
    return 0;
}
int main()
{
    int size,*arr;
    struct node *ptr;
    arr=(int*)malloc(size*sizeof(int));
    printf("Enter number of elements you want to allocate : ");
    scanf("%d",&size);
     int i;
    for(i=0;i<size;i++)
    {
        struct node *arr[i];
        arr[i]=(struct node*)malloc(sizeof(struct node));
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]->data);
        arr[i]->next=arr[i+1];
        if(i==size-1)
        arr[i]->next=NULL;
    }
    showdata(ptr);
return 0;
}*/ 