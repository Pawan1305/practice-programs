#include<stdio.h.>
int main()
{
    int arr1[10][10],arr2[10][10],arr3[10][10],i,j;
    int row1,column1,row2,column2;
    printf("\nEnter Row of matrix 1st = \n");
    scanf("%d",&row1);
    printf("\nEnter Column of matrix 1st = \n");
    scanf("%d",&column1);
    printf("\nEnter Row of matrix 2nd = \n");
    scanf("%d",&row2);
    printf("\nEnter Column of matrix 2nd = \n");
    scanf("%d",&column2);
    if(row1==row2 && column1==column2)
    {
        printf("\nEnter Elements of matrix 1st\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    } 
    printf("\nEnter Elements of 2nd matrix\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nSum of both Matrices\n");
    for(i=0;i<row1;i++)
    {
        printf("\n");
        for(j=0;j<column1;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
    }
    printf("\n");  
     }
     else
     {
         printf("\nError!\nRows and columns of both matrices must be same\n");

     }
    return 0;
}