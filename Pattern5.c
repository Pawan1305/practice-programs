#include<stdio.h>
int main()
{
int i,j,k=9;
for(i=1;i<=5;i++)
{
    for(j=1;j<=9;j++)
    {
        if(i==j)
        {
        printf("*");
        }
        else if(j==k && j!=5)
        {
            printf("*");
            k--;
        }
        else
        {
        printf(" ");
        }
    }
    printf("\n");
} 
return 0;
}