#include<stdio.h>
int main()
{
  int costpr,selpr,profit;
  printf("Enter cost price = ");
  scanf("%d",&costpr);
  printf("Enter selling price = ");
  scanf("%d",&selpr);
  if(costpr<selpr)
  {
    profit=selpr-costpr;
  printf("Profit = %d\n",profit);
  }
  else
  {
    profit=costpr-selpr;
    printf("Loss = %d\n",profit);
  }
   return 0;
}