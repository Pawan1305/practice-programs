#include<stdio.h>
typedef struct account{
    char name[20];
    int ac_num;
    int pass;
}ac;

int main()
{
    int n,i,j;
ac acc[100];
printf("\nHow many account's detail you want to store = ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\nEnter name of account holder %d = ",i+1);
    scanf("%s",&acc[i].name);
    printf("\nEnter Account number = ");
    scanf("%d",&acc[i].ac_num);
    printf("\nNOTE : Password must be an integer\nEnter Password = ");
    scanf("%d",&acc[i].pass);
}
for(j=0;j<n;j++)
{
    printf("\nName of account holder number %d\n",j+1);
    printf("%s",acc[j].name);
    printf("\nAccount number = %d\n",acc[j].ac_num);
    printf("\nPassword = %d\n",acc[j].pass);
}
/*
ac a1;
    printf("\nEnter name of account holder = ");
    gets(a1.name);
    printf("\nEnter Account number = ");
    scanf("%d",&a1.ac_num);
    printf("\nPassword must be a integer\nEnter Password = ");
    scanf("%d",&a1.pass);
     printf("\nName of account holder number \n");
    puts(a1.name);
    printf("\nAccount number = %d\n",a1.ac_num);
    printf("Password = %d\n",a1.pass);
*/
return 0;
}