#include<stdio.h>
int main()
{
    int n,j=1;
    printf("Enter length of array = ");
    scanf("%d",&n);
    int arr[n],num=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element = ",i+1);
        scanf("%d",&arr[i]);
        num=((num*j)+(arr[i]%10));
        j*=10;
    }
    if(num%10==0)
    printf("Yes\n");
    else
    printf("No\n");
return 0;
}