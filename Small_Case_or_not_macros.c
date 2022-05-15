#include<stdio.h>
#define Upper(c) (c>='A' && c<='Z')
#define Lower(c) (c>='a' && c<='z')
int main()
{
    char ch;
    printf("\nEnter any Character = ");
    scanf("%c",&ch);
    if(Upper(ch))
    printf("\nUpper Case\n");
    else if(Lower(ch))
    printf("\nLower Case\n");
    else
    printf("\nNot an Alphabet\n");
return 0;
}