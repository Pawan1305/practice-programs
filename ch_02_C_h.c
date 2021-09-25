#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    if(num<0)
    printf("Absolute number = %d\n",(-1)*num);
    else
    printf("%d is an Absolute number\n",num);
    return 0;
}