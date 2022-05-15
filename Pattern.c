#include<stdio.h>
int main()
{
int i,j;
for(i=4;i>=0;i--)
{
    for(j=0;j<=4;j++)
    {
        if(j==i)
        {
        printf("%d\t",i+1);
        }
        printf(" ");
    }
    printf("\n");
}
return 0;
}