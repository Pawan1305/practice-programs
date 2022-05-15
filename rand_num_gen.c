#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand();
    printf("\nThe Number is %d\n",number);
    return 0;
}