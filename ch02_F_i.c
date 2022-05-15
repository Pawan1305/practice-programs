#include<stdio.h>
int main()
{
    int A,B,per;
    //Taking input//
    printf("\nEnter marks of A\n");
    scanf("%d",&A);
    printf("\nEnter marks of B\n");
    scanf("%d",&B);
    if(A>=55 && B>=45)
    printf("\nYou are Qualified\n");
    else if(A<55 && A>=45 && B>55)
    printf("\nYou are Qualified\n");
    else if(B<45 && A>=65)
    printf("\nYou are allowed to reappear in examination of B to qualify\n");
    else
    printf("\nYou are FAILED\n");
}