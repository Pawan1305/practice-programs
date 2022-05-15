#include<stdio.h>
int main()
{
int i,j,k=7;
for(i=1;i<=4;i++)
{
    for(j=1;j<=7;j++)
    {
        if(i==j)
        {
        printf("*");
        }
        else if(j==k && j!=4)
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