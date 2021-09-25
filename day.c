#include<stdio.h>
int main()
{
    int year,ref_year=1900,diff,leap=0,total_days,reamaning,num;
    printf("Enter a year greater than 1900 = ");
    scanf("%d",&year);
    //finding diffrence
    diff=year-ref_year;
    while(ref_year<year)
    {
         //calculating no. of leap years//
    if(ref_year%4==0&&ref_year%100!=0||ref_year%400==0)
    {
        leap++;
        }
    ref_year++;
    }
    reamaning=diff-leap;
    total_days=(leap*366)+(reamaning*365);
    num=total_days%7;
    if(num==0)
    printf("MONDAY\n");
    if(num==1)
    printf("TUESDAY\n");
    if(num==2)
    printf("WEDNESDAY\n");
    if(num==3)
    printf("THRUSDAY\n");
    if(num==4)
    printf("FRIDAY\n");
    if(num==5)
    printf("SATURDAY\n");
    if(num==6)
    printf("SUNDAY\n");
}