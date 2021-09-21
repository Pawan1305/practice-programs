//Program to find the sum of 1st and last digits of a 4 digit number //
#include<stdio.h>
int main()
{
    int num,num1,num2,sum;
    printf("Enter a Four digit num = ");
    scanf("%d",&num);
    num1=num%10;
    num2=num/1000;
    sum=num1+num2;
    printf("Sum of 1st and last digit = %d\n",sum);
    return 0;
}