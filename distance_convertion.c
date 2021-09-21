/* dis = distance
    met = meters
    cm = centimeters
*/
#include<stdio.h>
int main()
{
   float dis,met,cm,feet,inch; 
    printf("Enter distance (in km.) = ");
    scanf("%f",&dis);
    met=1000*dis;
    printf("Meters = %f\n",met);
    cm=met*10;
    printf("Centimeters = %f\n",cm);
    feet=3.281*met;
    printf("Feets = %f\n",feet);
    inch=12*feet;
    printf("Inches = %f\n",inch);
    return 0;
}