#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int age;
    char name[20];
    char father[20];
    public:
    student();
    student(int,char*,char*);
    void putdata();
};
student::student()
{
    age=20;
    strcpy(name,"Ram");
    strcpy(father,"Dashrath");
}
student::student(int ag,char*n,char*f)
{
    strcpy(name,n);
    strcpy(father,f);
    age=ag;
}
void student::putdata()
{
    cout<<"Name = "<<name<<endl;
    cout<<"Fathers name = "<<father<<endl;
    cout<<"Age = "<<age<<endl;
}
int main()
{
    student s,s1(22,"Rohan","Mohan");
    s.putdata();
    s1.putdata();
    return 0;
}