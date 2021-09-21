#include<stdio.h>
int main()
{
    int am_widr,ten,fifty,hund,rem;
    printf("Enter amount to be withdrawn (in hundreds) = ");
    scanf("%d",&am_widr);
   hund=am_widr/100;
   printf("Number of Hundred rupee notes = %d\n",hund);
   fifty=(am_widr%100)/50;
   printf("Number of Fifty rupee notes = %d\n",fifty);
   ten=((am_widr%100)%50)/10;
   printf("Number of Ten rupee notes = %d\n",ten);
   rem=((am_widr%100)%50)%10;
   printf("Reamining balance = %d\n",rem);
   return 0; 
}