#include<stdio.h>
#include<string.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--)
	{
        int arr[]={6,2,5,5,4,5,6,3,7,6},sticks=0,i,j;
        char num[100];
		scanf("%s",num);
		for(i=0;i<strlen(num);i++)
		{
			for(j=0;j<9;j++)
			{
				if(num[i]==j)
				{
					sticks+=arr[j];
				}
			}
		}
		if(sticks%2==0)
		{
			for(i=0;i<sticks/2;i++)
			printf("1");
		}
	}
return 0;
}