#include<stdio.h>
int main()
{
    float far,cel;
    printf("Enter temprature (in Farenheit) = ");
    scanf("%f",&far);
    cel=(far-32)*5/9;
    printf("In degree celcius = %f\n",cel);
    return 0;
}