#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int *arr,int n,int search)
{
    int temp,i;
for(i=0;i<n;i++)
{
    if(arr[i]==search)
    {
        temp=i;
        return i;
    }
    else
    {
        temp=-1;
    }
}
return temp;
}
int main()
{
int *arr,n,i,search,temp;
printf("\nEnter number of elements in array = ");
scanf("%d",&n);
arr=(int*) malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
    printf("\nEnter element number %d = ",i+1);
    scanf("%d",&arr[i]);
}
 printf("\nEnter element to be search = ");
scanf("%d",&search);
temp=LinearSearch(arr,n,search);
if(temp!=-1)
{
    printf("\n%d element found at index %d\n",search,temp);
}
else
{
    printf("\nElement not found\n");
}
return 0;
}