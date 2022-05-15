#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp=fopen("Random.txt","r");
while(1)
{
    c=fgetc(fp);
    if(c==EOF)
    break;
    else
    printf("%c",c);
}
fclose(fp);
return 0;
}