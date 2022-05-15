#include<stdio.h>
int main()
{
    int stock,order,credit;
    printf("\nEnter Item Stock : ");
    scanf("%d",&stock);
    printf("\nEnter Customer Order : ");
    scanf("%d",&order);
    printf("\nEnter Credit (1 if OK/0 if Panding) : ");
    scanf("%d",&credit);
    if(order<=stock && credit==1)
    printf("\nSupply is Required\n");
    else if(credit==0)
    printf("\nDo not Supply\n");
    else if(credit==1 && stock<order)
    printf("\nSupply what is in Stock and intimate to him data the balance will be Shipped\n");
    return 0;
}