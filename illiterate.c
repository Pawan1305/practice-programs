/*
men=52%
literacy=48%
men literacy=35%
illiterate men and women =?
total population=80,000
*/
#include<stdio.h>
int main()
{
    int il,il_men,il_women;
    il=(100-48)*80000/100;
    il_men=(52-35)*80000/100;
    printf("Illiterate men = %d\n",il_men);
    il_women=(52-17)*80000/100;
    printf("Illiterate women = %d\n",il_women);
return 0;
}