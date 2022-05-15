#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    if(c>=0&&c<=47||c>=58&&c<=64||c>=91&&c<=96||c>=123&&c<=127)
    printf("special symbol\n");
    else if(c>=48&&c<=57)
    printf("A digit\n");
    else if(c>=97&&c<=122)
    printf("Small case letter\n");
    else if(c>=65&&c<=90)
    printf("Capital case letter\n");
    return 0;
}