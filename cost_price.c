#include<stdio.h>
int main()
{
    int selpr,pro,costpr;
    printf("Enter total selling price of 15 items = ");
    scanf("%d",&selpr);
    printf("Enter total profit = ");
    scanf("%d",&pro);
    costpr=(selpr-pro)/15;
    printf("Cost price of one item = %d\n",costpr);
    return 0;
}