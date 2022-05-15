#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,slope1,slope2;
    printf("Enter the coordinate (x1,y1)\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinate (x2,y2)\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter the coordinate (x3,y3)\n");
    scanf("%d%d",&x3,&y3);
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    printf("Slope 1 = %d\n",slope1);
    printf("Slope 2 = %d\n",slope2);
    if(slope1==slope2)
    printf("All the three points fall on Straight line\n");
    else
    printf("All the three points do NOT fall on Straight line\n");
    return 0;
}