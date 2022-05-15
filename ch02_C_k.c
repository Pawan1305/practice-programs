#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,radius,dis;
    printf("Enter coordinate of centre of circle\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    printf("Enter another point\n");
    scanf("%d%d",&x2,&y2);
    dis=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
    if(dis>radius)
    printf("Point lies outside the circle\n");
    if(dis<radius)
    printf("Point lies inside the circle\n");
    if(dis==radius)
    printf("Point lies on the circle\n");
    return 0;
}