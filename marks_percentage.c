#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total;
    float per;
     //per=percentage//
     //max marks = 100 for each sub(subject)//
     printf("Enter marks in subject 1 = ");
         scanf("%d",&sub1);
         printf("Enter marks in subject 2 = ");
         scanf("%d",&sub2);
         printf("Enter marks in subject 3 = ");
         scanf("%d",&sub3);
         printf("Enter marks in subject 4 = ");
         scanf("%d",&sub4);
         printf("Enter marks in subject 5 = ");
         scanf("%d",&sub5);
     total=sub1+sub2+sub3+sub4+sub5;
     printf("Total = %d\n",total);
     per=(total*100)/500;
     printf("Percentage = %f\n",per);
     return 0;
}