#include<stdio.h>
int main()
{
    float time;
    printf("\nEnter time taken by the worker(in hours) : ");
    scanf("%f",&time);
    if(time>2 && time<3)
    printf("\nWorker is highly efficiant\n");
//Added point from myself//
    else if(time<2)
    printf("\nYou are SUPERMAN\n");
    else if(time>3 && time<4)
    printf("\nWorker is ordered to improve speed\n");
    else if(time>4 && time<5)
    printf("\nThe worker is given Training to improve the speed\n");
    else if(time>5)
    printf("\nWorker has to leave the company\n");
    return 0;
}