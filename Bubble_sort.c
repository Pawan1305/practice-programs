#include<stdio.h>
#include<stdlib.h>
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
int *arr,n,i,j,temp,isSorted;
printf("\nEnter number of elements = ");
scanf("%d",&n);
arr=(int*) malloc(n* sizeof(int));
printf("\nEnter elements of array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++)
{
    isSorted=1;
    for(j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            isSorted=0;
        }
    }
    if(isSorted)
    {
        printarray(arr,n);
    return;
    }
}
printf("\nSorted array\n");
printarray(arr,n);
return 0;
}