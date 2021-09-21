#include<stdio.h>
int main()
{
    int num,num1,num2,num3,num4,temp1,temp2,temp3,temp4;
    printf("Enter a Five digit number = ");
    scanf("%d",&num);
    num1=num%10;
    temp1=num/10;
    num2=temp1%10;
    temp2=temp1/10;
    num3=temp2%10;
    temp3=temp2/10;
    num4=temp3%10;
    temp4=temp3/10;
    printf("Reverse of the number = %d%d%d%d%d\n",num1,num2,num3,num4,temp4);
}