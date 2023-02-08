#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int size;
    int *arr;

};
int main()
{
    struct myarray myarr;
    int i;
printf("Enter size of array = ");
scanf("%d",&myarr.size);
myarr.arr=(int*)malloc(myarr.size*sizeof(int));
printf("Enter elements of array\n");
for(i=0;i<myarr.size;i++)
{
    printf("Enter element number %d = ",i+1);
    scanf("%d",&myarr.arr[i]);
}
printf("Your array\n");
for(i=0;i<myarr.size;i++)
{
    printf("%d\t",myarr.arr[i]);
}
printf("\n");
return 0;
}