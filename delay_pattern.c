#include<stdio.h>
#include<time.h>
void delay(int no_of_sec)
{
    int milli_sec;
    milli_sec = 1000*no_of_sec;
    clock_t start_time=clock();
    while(clock()<start_time+milli_sec);
}
int main()
{
    int i,j,k,l,m,n;
    for(i=1;i<25;i++)
    {
        if(i%2==0)
            {
                 for(k=1;k<25;k++)
                {
                printf(" ");
                }
                
                   for(l=1;l<25;l++)
                    {
                        delay(1);
                        for(m=1;m<l+1;m++)
                        {
                            printf("\b");
                        }
                        for(n=1;n<l+1;n++)
                        {     
                            printf("*");
                        }
                    }
            }
            else
            {
        for(j=1;j<25;j++)
        {
            delay(1);
            printf("*");
            }
        }
        printf("\n");
    }
return 0;
}