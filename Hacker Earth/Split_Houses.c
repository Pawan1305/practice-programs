#include<stdio.h>
int IsPossible(char str[],int len)
{
    int i,temp=0;
    for(i=0;i<len;i++)
    {
        if(str[i]=='H')
        continue;
        else
        {
        temp=1;
        return temp;
        }
    }
    return temp;
}
int main()
{
    int n,i,temp,count=0;
    char str[20];
    scanf("%d",&n);
    scanf("%s",&str);
    if(n==1)
    {
        if(str[0]=='H')
		{
        	printf("YES\n");
        	puts(str);
        	return 0;
		}
		if(str[0]=='.')
		{
			printf("YES\n");
			str[0]='B';
			puts(str);
			return 0;
		}
    }
    temp=IsPossible(str,n);
    if(temp)
    {
    for(i=0;i<n;i++)
    {
        if(str[i]=='H')
        {
            continue;
        }
        else
        str[i]='B';
    }
    for(i=0;i<n;i++)
    {
        if(str[i]=='H')
        {
            count++;
            if(count>1)
            {
                printf("NO\n");
                return 0;
            }
        }
        else
        count=0;
    }
    printf("YES\n");
    puts(str);
    }
    else
    printf("NO\n");
return 0;
}