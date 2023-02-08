#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,size,i,ind;
    printf("Enter size of array = ");
    scanf("%d",&size);
    arr=(int*)malloc((size+1)*sizeof(int));
    printf("Enter elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Enter element number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter index where you want to insert element = ");
    scanf("%d",&ind);
    for(i=size+1;i>ind;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("Enter element to be inserted = ");
    scanf("%d",&arr[ind]);
    size+=1;
    printf("\nUpdated array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
return 0;
}