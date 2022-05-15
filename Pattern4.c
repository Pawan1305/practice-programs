#include<stdio.h>
int main()
{
int i,j,k=4;
for(i=1;i<5;i++)
{
    for(j=1;j<5;j++)
    {
        
        if(i%2==0 && j==1)
        {
        printf("%d",i);
        }
        if((i%2)!=0 && j==k)
        {
            printf("%d",k);
            k--;
        }
            printf(" ");
    }
    printf("\n");
}
return 0;
}