#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<5;i++)
{
    for(j=5;j>=1;j--)
    {
        
        if(i%2==0 && j==5)
        {
        printf("%d",i);
        }
        if(j==i && (j%2)!=0)
        {
            if(j==1)
            printf("%d",j+4);
            else
            printf("%d",j);
        }
            printf(" ");
    }
    printf("\n");
}
return 0;
}