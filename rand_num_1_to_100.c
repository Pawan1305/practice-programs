#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100;
    printf("\nThe Number is %d\n",number);
    return 0;
}