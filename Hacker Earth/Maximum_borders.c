#include<stdio.h>
int main()
{
    int test;

    //scanning the testcases
    scanf("%d",&test);
    while(test--)
    {
        int row,length,count=0;
        scanf("%d %d",&row,&length);
        for(int i=0;i<row;i++)
        {
            int temp=0;
            char str[length];
            scanf("%s",&str);
            for(int j=0;j<length;j++)
            {
                if(str[j]=='#')
                {
                    temp++;
                }
            }
            if(temp>count)
            {
                count=temp;
            }
        }
        printf("%d\n",count);
    }
return 0;
}