#include<stdio.h>
int main()
{
    int num,num1,num2,num3,num4,num5,new1,new2,new3,new4,new5,i;
    printf("Enter any Five digit number = ");
    scanf("%d",&num);
    num1=num%10;
    num2=(num/10)%10;
    num3=(num/100)%10;
    num4=(num/1000)%10;
    num5=num/10000;
    printf("your entered numbers are\n%d\n%d\n%d\n%d\n%d\n",num1,num2,num3,num4,num5);
    new1=num5+num5;
    new2=num5+num4;
    new3=num5+num3;
    new4=num5+num2;
    new5=num5+num1;
    if(new1>9)
    new1=0;
    if(new2>9)
    new2=0;
    if(new3>9)
    new3=0;
    if(new4>9)
    new4=0;
    if(new5>9)
    new5=0;
    printf("The new number = %d%d%d%d%d\n",new1,new2,new3,new4,new5);
    return 0;
}