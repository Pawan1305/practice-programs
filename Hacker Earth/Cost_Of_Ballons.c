#include<stdio.h>
int main()
{
    int test,i,green,pur,students;
    scanf("%d",&test);
    for(i=3;i<test+3;i++)
    {
        scanf("%d%d",&green,&pur);
        scanf("%d",&students);
        int arr[students][2],j,k,count=0;
        for(j=0;j<students;j++)
        {
          for(k=0;k<2;k++)
          {
                scanf("%d",&arr[j][k]);
            if(i%2!=0)
            {
                if(k)
                {
                    if(arr[j][k])
                    count+=pur;
                }
                else
                {
                    if(arr[j][k])
                    count+=green;
                }
            }
            else
            {
                 if(k)
                {
                    if(arr[j][k])
                    count+=green;
                }
                else
                {
                    if(arr[j][k])
                    count+=pur;
                }
            }
           }
        }
        printf("%d\n",count);
    }
return 0;
}