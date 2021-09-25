#include<stdio.h>
int main()
{
    int num,num1,num2,num3,num4,num5,rev;
    printf("Enter a five digit = ");
    scanf("%d",&num);
    num1=num%10;
    num2=(num/10)%10;
    num3=(num/100)%10;
    num4=(num/1000)%10;
    num5=(num/10000)%10;
    printf("REVERSE = %d%d%d%d%d\n",num1,num2,num3,num4,num5);
    rev=(num5*1)+(num4*10)+(num3*100)+(num2*1000)+(num1*10000);
    if(num==rev)
    printf("Original and reversed number are same\n");
    else
    printf("Original and reversed number are NOT same\n");
    return 0;
}