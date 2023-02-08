#include<stdio.h>
#include<stdlib.h>
int binarysearch(int arr[],int size,int search)
{
    int mid,low,high;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    do
    {
        if(search==arr[mid])
        {
            return mid;
        }
        else if(search<arr[mid])
        {
          high=mid-1;
          mid=(low+high)/2;  
        }
        else if(search>arr[mid])
        {
            low=mid+1;
            mid=(low+high)/2;
        }
    } 
    while(low<=high);

    return -1; 
}
int main()
{
int *arr,n,i,search,temp;
printf("\nEnter number of elements in array = ");
scanf("%d",&n);
arr=(int*) malloc(sizeof(int)*n);
printf("Enter Sorted array\n");
for(i=0;i<n;i++)
{
    printf("\nEnter element number %d = ",i+1);
    scanf("%d",&arr[i]);
}
 printf("\nEnter element to be search = ");
scanf("%d",&search);
temp = binarysearch(arr,n,search);
if(temp!=-1)
{
    printf("\n%d Element found at index %d\n",search,temp);
}
if(temp==-1)
{
    printf("\nElement not Found\n");
}
return 0;
}