#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a Character\n");
    scanf("%c",&ch);
    (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127 ? printf("\nSpecial Symbol\n") : printf("\nNot a Special Symbol\n")); 
return 0;
}