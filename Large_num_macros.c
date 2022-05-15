#include<stdio.h>
#define largeNum(a,b) ((a>b)?1:0)
/* ? and : means if a>b than 1
    else 0 */
int main()
{
    int num1,num2,i;
    printf("\nEnter 1st number = ");
    scanf("%d",&num1);
    printf("\nEnter 2nd number = ");
    scanf("%d",&num2);
    i = largeNum(num1,num2);
    if(i==1)
    printf("\n1st number is greater than 2nd\n");
    if(i==0 && num1!=num2)
    printf("\n2nd number is greater than 1st\n");
    if(num1==num2)
    printf("\nBoth numbers are equal\n");
    return 0;
}