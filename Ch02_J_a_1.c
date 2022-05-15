#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a Character = ");
    scanf("%c",&ch);
    (ch>=97 && ch<=122?printf("\nLower case\n"):printf("\nNot a Lower case\n"));
    return 0;
}