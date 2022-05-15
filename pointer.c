//Test programme//
#include<stdio.h>
int main()
{
    int *j,i=4;
    *j=&i;
    printf("%d\n",&j);
    printf("%d\n",*j);
    printf("%d\n",&i);
    printf("%u\n",*j);
    return 0;
}