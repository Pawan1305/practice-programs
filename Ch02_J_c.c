#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter 1st number = ");
    scanf("%d",&a);
    printf("\nEnter 2nd number = ");
    scanf("%d",&b);
    printf("\nEnter 3rd number = ");
    scanf("%d",&c);
    (a>b && a>c ? printf("\n%d is Largest\n",a) : (b>a && b>c ? printf("\n%d is largest\n",b) : (c>a && c>b ? printf("\n%d is Largest\n",c) : printf("\nAll are Equal\n"))));
}