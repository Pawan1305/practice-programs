#include<stdio.h>
int main()
{
    int C,D,temp;
    printf("Enter 1st number = ");
    scanf("%d",&C);
    printf("Enter 2nd number = ");
    scanf("%d",&D);
    temp=C;
    C=D;
    D=temp;
    printf("After interchanging\n1st number = %d\n2nd number = %d\n",C,D);
    return 0;
}