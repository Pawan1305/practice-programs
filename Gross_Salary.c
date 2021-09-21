/* Basic salary(bas_sal) input through keyboard
   dearness allowness(dear_allow) is 40% of basic salary
   house rent(rent) is 20% of basic salary
   got gross salary(gross_sal) */
#include<stdio.h>
int main()
{
    int bas_sal,dear_allow,rent,gross_sal;
    printf("Your Basic salary = ");
    scanf("%d",&bas_sal);
dear_allow=(40*bas_sal)/100;
rent=(20*bas_sal)/100;
gross_sal=bas_sal+dear_allow+rent;
printf("Gross salary is %d\n",gross_sal);
return 0;
}