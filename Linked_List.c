#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
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

printf("Enter head value = ");
scanf("%d",&head->data);
head->next = second;

second->data = 12;
second->next = third;

third->data = 15;
third->next = fourth;

fourth->data = 20; 
fourth->next = NULL;

showdata(head);      

// printf("%d\n",head->data);
// printf("%d\n",head->next);

// printf("%d\n",second->data);
// printf("%d\n",second->next);

// printf("%d\n",third->data);
// printf("%d\n",third->next);

// printf("%d\n",fourth->data);
// printf("%d\n",fourth->next);
return 0;
}