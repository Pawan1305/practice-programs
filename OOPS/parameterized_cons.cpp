#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    char father[20];
    int age;
    public:
    void putdata();
    student(char *,char *,int);
};
student::student(char *n,char *f,int ag)
{
    strcpy(name,n);
    strcpy(father,f);
    age=ag;
}
void student::putdata()
{
    cout<<"The name is : "<<name<<endl;
    cout<<"Fathers name : "<<father<<endl;
    cout<<"Age = "<<age<<endl;
}
int main()
{
    student s("Pak","Ind",1);
    s.putdata();
    return 0;
}