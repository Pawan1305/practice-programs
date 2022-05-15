#include<stdio.h>
int swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return 0;
}
int main()
{
int x,y;
printf("\nEnter value of X = ");
scanf("%d",&x);
printf("\nEnter value of y = ");
scanf("%d",&y);
printf("\nValue before Swapping\nX = %d\nY = %d\n",x,y);
swap(&x,&y);
printf("\nValue After Swapping\nX = %d\nY = %d\n",x,y);
return 0;
}