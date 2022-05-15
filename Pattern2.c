#include<stdio.h>
int main()
{
int i,j;
for(i=3;i>=0;i--)
{
    for(j=0;j<=3;j++)
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