#include<stdio.h>
int main()
{
    int age,gender;
    char health,town;
    printf("Enter health[E(excellent)/P(poor)] : ");
    scanf("%c",&health);
    printf("Enter age : ");
    scanf("%d",&age);
    printf("Enter gender(1 for Male / 2 for Female) : ");
    scanf("%d",&gender);
    printf("Enter Town(U/R) : ");
    town=getchar();
    if(health=='E' && age>25 && age<35 && town=='U' && gender=='M')
    printf("your Premium is Rs.4 per thousand and policy amount cannot exceed Rs.2 Lakhs\nYou are Insured\n");
    else if(health=='E' && age>25 && age<35 && town=='U' && gender=='F')
        printf("Your premium is Rs. 3 per thousand and policy amount cannot exceed Rs.1 Lakh\nYou are Insured\n");
    else if(health=='P' && age>25 && age<35 && town=='R' && gender=='M' ) 
    printf("The premium is Rs.6 per thousand and policy cannot exceed Rs.10,000\nYour are Insured\n");
    else
    printf("Your are NOT Insured\n");
    return 0;
}