#include<stdio.h>
int main()
{
    int l,b,per,aor,radius;
    float circum,aoc; 
    printf("Enter length of rectangle = ");
    scanf("%d",&l);
    printf("Enter breath of rectangle = ");
    scanf("%d",&b);
    per=2*(l+b);
    printf("Perimeter = %d\n",per);
    aor=l*b;
    printf("Area = %d\n",aor);
    printf("Enter radius of circle = ");
    scanf("%d",&radius);
    circum=2*3.14*radius;
    printf("Circumference = %f\n",circum);
    aoc=3.14*radius*radius;
    printf("Area = %f\n",aoc);
    return 0;
    }