#include<stdio.h>
int main()
{
    int hard,tensile;
    float carbon;
    printf("\nEnter hardness of steel : ");
    scanf("%d",&hard);
    printf("\nEnter Carbon content : ");
    scanf("%f",&carbon);
    printf("\nEnter Tensile Strength : ");
    scanf("%d",&tensile);
    if(hard>50 && carbon<0.7 && tensile>5600)
    printf("\nGrade = 10\n");
    else if(hard>50 && carbon<0.7)
    printf("\nGrade = 9\n");
    else if(carbon<0.7 && tensile>5600)
    printf("\nGrade = 8\n");
    else if(hard>50 && tensile>5600)
    printf("\nGrade = 7\n");
    else if(hard>50 || carbon<0.7 || tensile>5600)
    printf("\nGrade = 6\n");
    else
    printf("\nGrade = 5\n");
    return 0;
}