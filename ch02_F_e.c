#include<stdio.h>
int main()
{
    int days;
    printf("Enter number of days you late : ");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    printf("\nFine = 50 Paise\n");
    else if(days>=6 && days<=10)
    printf("\nFine = 1 Rupee\n");
    else if(days>10 && days<=30)
    printf("\nFine = 5 Rupees\n");
    else if(days==0)
    printf("\nCongats!\nNo Fine\n");
    else
    printf("\nYour membership is Cancelled\n");
    return 0;
}