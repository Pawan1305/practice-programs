#include<stdio.h>
#include<stdlib.h>
int main()
{
int choice,flag=1,*arr,n,top=0,i,temp;
printf("\nEnter number of elements in Stack = ");
scanf("%d",&n);
arr=(int*)malloc(sizeof(int)*n);
while(flag)
{
printf("\nMenu\n1.Push\n2.POP\n3.Display\n4.Exit\n");
printf("\nEnter your Choice\n");
scanf("%d",&choice);
 switch(choice)
 {
    case 1:
    if(top==n)
    {
        printf("\nStack is Overflow\n");
        top--;
    }
    else
    {
    printf("\nEnter Element = ");
    scanf("%d",&arr[top]);
    top++;
    }
    break;

    case 2:
    if(top==-1)
    {
        printf("\nStack is Underflow\n");
    }
    else
    {
        printf("\n%d Element is removed\n",arr[top]);
        top--;
    }
    break;

    case 3:
    if(top==-1)
    {
        printf("\nStack is Empty\n");
    }
    printf("\nTop (INDEX) = %d\n",top);
    for(i=top;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    break;

    case 4:
    flag=0;
    break;

    default:
    printf("\nERROR!\nEnter Proper Key\n");
 }
}
return 0;
}   