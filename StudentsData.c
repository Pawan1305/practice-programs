#include<stdio.h>
#include<string.h>
struct student
{
    char name[15];
    int class;
    int rollno;
};

int main()
{
struct student s[10];
int i;
for(i=0;i<10;i++)
{
    printf("\nEnter name of student %d = ",i+1);
    scanf("%s",s[i].name);
    printf("\nEnter class of student %d = ",i+1);
    scanf("%d",&s[i].class);
    printf("\nEnter Roll number of student %d = ",i+1);
    scanf("%d",&s[i].rollno);
}
for(i=0;i<10;i++)
{
    printf("\nName of student %d = %s\n",i+1,s[i].name);
    printf("\nClass of student %d = %d\n",i+1,s[i].class);
    printf("\nRoll number of student %d = %d\n",i+1,s[i].rollno);
    
}
return 0;
}