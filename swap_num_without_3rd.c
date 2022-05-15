#include<stdio.h>
int main()
{
    int num1,num2;
printf("\nEnter 1st number = ");
scanf("%d",&num1);
printf("\nEnter 2nd number = ");
scanf("%d",&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("\nAfter swapping\n");
printf("\n1st number = %d\n",num1);
printf("\n2nd number = %d\n",num2);
return 0;
}