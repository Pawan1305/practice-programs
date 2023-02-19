#include<stdio.h>
#include<stdlib.h>
void ScanArr(int *arr1,int *arr2,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr2[i]);
    }
}

int num_of_steps(int arr1[],int arr2[],int len)
{
    int i,k,steps=0;

//Shifting the smallest number of first array in last
    for(i=0;i<len-1;i++)
    {
        if(arr1[i]<arr1[i+1])
        {
            k=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=k;

            k=arr2[i];
            arr2[i]=arr2[i+1];
            arr2[i+1]=k;
        }
    }

//Making last(Smallest) and other elements same
//And counting steps
    for(i=0;i<len-1;i++)
    {
        while(arr1[len-1]!=arr1[i])
        {
            if(arr1[i]<=0)
            return -1;

            if(arr1[len-1]<arr1[i])
            {
                arr1[i]=arr1[i]-arr2[i];
                steps++;
            }

            if(arr1[i]<arr1[len-1])
            {
                arr1[len-1]=arr1[len-1]-arr2[len-1];
                steps++;
            }
        }
    }
    return steps;
}
int main()
{
    int len,*arr1,*arr2,answer;
    scanf("%d",&len);

    //Allocating Memory
    arr1=(int*)malloc(sizeof(int)*len);
    arr2=(int*)malloc(sizeof(int)*len);

    ScanArr(arr1,arr2,len);
    
    answer = num_of_steps(arr1,arr2,len);
    printf("%d\n",answer);
    
    return 0;
}