#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[9],vow[]={'A','E','I','O','U','Y'};
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(vow[i]==str[2])
		{
			printf("invalid\n");
			return 0;
		}
	}
return 0;
}