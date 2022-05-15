#include<stdio.h>
int main()
{
int choice,row,column,i,j,arr1[10][10],arr2[10][10];
int k,l,m,arr3[10][10],s;
printf("Enter rows of matrix = ");
scanf("%d",&row);
printf("Enter columns of matrix = ");
scanf("%d",&column);
if(row==column)
{
    printf("\nEnter Elements of Matrix 1st\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\nEnter Element a%d%d = ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter Elements of Matrix 2nd\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\nEnter Element a%d%d = ",i+1,j+1);
            scanf("\n%d",&arr2[i][j]);
        }
    }
do{ 
printf("\nMenu\n");
printf("\n1.Transpose of matrix\n2.Upper Triangular matrix\n3.Lower Triangular matrix\n");
printf("\n4.Addition of matrix\n5.Subtraction of matrix\n");
printf("\n6.multiplication of matrix\n7.Exit\n");
printf("\nEnter Your Choice\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("\nTranspose of matrix 1st\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            printf("%d\t",arr1[l][k]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix 2nd\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            printf("%d\t",arr2[l][k]);
        }
        printf("\n");
    }
    break;
    case 2:
    printf("\nUpper Triangular matrix of 1st\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            if(k>l)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",arr1[k][l]);
            }
        }
        printf("\n");
    }
    printf("\nUpper Triangular matrix of 2nd\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            if(k>l)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",arr2[k][l]);
            }
        }
        printf("\n");
    }
    break;
    case 3:
    printf("\nLower Triangular matrix of 1st\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            if(k<l)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",arr1[k][l]);
            }
        }
        printf("\n");
    }
    printf("\nLower Triangular matrix of 2nd\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            if(k<l)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",arr2[k][l]);
            }
        }
        printf("\n");
    }
    break;
    case 4:
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            arr3[k][l]=arr1[k][l]+arr2[k][l];
            printf("%d\t",arr3[k][l]);
        }
        printf("\n");
    }
    break;
    case 5:
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            arr3[k][l]=arr1[k][l]-arr2[k][l];
            printf("%d\t",arr3[k][l]);
        }
        printf("\n");
    }
    break;
    case 6:
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            s=0;
           for(m=0;m<column;m++)
           {
               s=s+arr1[k][m]*arr2[m][l];
           }
           arr3[k][l]=s;
        }
    }
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            printf("%d\t",arr3[k][l]);
        }
        printf("\n");
    }
    break;
    case 7:
    break;
    default:
    printf("\nERROR !\nEnter Proper Key\n");
    break;
}
}while(choice!=7);
 }
else 
{
    printf("\nError! Row and column must be equal\n");
}
return 0;
}