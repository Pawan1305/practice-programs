#include<stdio.h>
#include<string.h>
int main()
{
    int i,x=0,y=0;
    char str[20];
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='z')
        x++;

        if(str[i]=='o')
        y++;
    }
    if(2*x==y)
    printf("Yes\n");
    else
    printf("No\n");
return 0;
}