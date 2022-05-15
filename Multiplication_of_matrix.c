#include<stdio.h>
int main()
{
int arr1[10][10],arr2[10][10],arr3[10][10],i,j,k,r1,c1,r2,c2,sum;
printf("\nEnter Row of matrix 1st = ");
scanf("%d",&r1);
printf("\nEnter Column of matrix 1st = ");
scanf("%d",&c1);
printf("\nEnter Row of matrix 2nd = ");
scanf("%d",&r2);
printf("\nEnter Column of matrix 2nd = ");
scanf("%d",&c2);
if(c1==r2)
{
    printf("\nEnter Elements of matrix 1st\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("\nEnter Element a%d%d = ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
    }
}
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("\nEnter Element a%d%d = ",i+1,j+1);
        scanf("%d",&arr2[i][j]);
    }
}
//Actual Calculation of multiplication//
//Ek matrix m jitni column hoti h uski 1 row m utne hi Element hote h //  
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        sum=0;
     for(k=0;k<c1;k++)
     {
         sum = sum + arr1[i][k]*arr2[k][j];
     }   
     arr3[i][j] = sum;
     printf("%d\t",arr3[i][j]);
    }
    printf("\n");
}
}
else
{
    printf("\nError\nMatrices cannot be Multiplied\n");
    printf("\nTo multiply two matrices no. of Columns of matrix first must be equal to no. of rows of matrix 2nd\n");
}
return 0;
}