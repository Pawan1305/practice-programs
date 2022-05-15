#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate\n");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0)
    printf("Point lies on origin\n");
    else if(x==0 && y!=0)
    printf("Point lies on Y-axis\n");
    else if(y==0 && x!=0)
    printf("Point lies on X-axis\n");
    else
    printf("Point lies inside any one of the Coordinate\n");
    return 0;

}