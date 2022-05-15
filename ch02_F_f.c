#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("\nEnter First side of triangle : ");
    scanf("%d",&a);
    printf("\nEnter Second side of triangle : ");
    scanf("%d",&b);
    printf("\nEnter Third side of triangle : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
    largest=a;
    if(b+c>a)
    printf("\nTriangle is Valid\n");
    else
    printf("\nTriangle is Invalid\n");
    }
    else if(b>a && b>c)
    {
    largest=b;
    if(a+c>b)
    printf("\nTriangle is Valid\n");
    else
    printf("\nTriangle is Invalid\n");
    }
    else if(c>a && c>b)
    {
    largest=c;
    if(a+b>c)
    printf("\nTriangle is Valid\n");
    else
    printf("\nTriangle is Invalid\n");
    }
    else
    printf("\nEvery side is Equal\n");
}