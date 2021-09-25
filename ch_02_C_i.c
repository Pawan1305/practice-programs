#include<stdio.h>
int main()
{
    int l,b,area,per;
    printf("Enter length of rectangle = ");
    scanf("%d",&l);
    printf("Enter breath of rectangle = ");
    scanf("%d",&b);
    area=l*b;
    printf("Area = %d\n",area);
    per=2*(l+b);
    printf("Perimeter = %d\n",per);
    if(area>per)
    printf("The area of rectangle with Length = %d and Breath = %d is greater than its perimeter\n",l,b);
    else
    printf("The area of rectangle with Length = %d and Breath = %d is NOT greater than its perimeter\n",l,b);
    return 0;
}