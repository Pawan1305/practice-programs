#include<stdio.h>
int IsEqual(int arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(arr[i]==1)
        continue;
        else
        return 0;
    }
    return 1;
}
int main()
{
    int len;
    printf("Enter length = ");
    scanf("%d",&len);
    int arr[len],i,j,count=0;
    printf("Enter array\n");;
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(!IsEqual(arr,len))
    {
        for(i=0;i<len;i++)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
                for(j=i+1;j<len;j++)
                {
                    if(arr[j]==0)
                    arr[j]=1;
                    else
                    arr[j]=0;
                }
                count++;
            }
            else
            continue;
        }
    }
    printf("%d\n",count);
return 0;
}