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
    student(const student &);
    void putdata();
};
    student::student()
    {
        age=10;
        strcpy(name,"Shyam");
        strcpy(father,"Ram");
    }
    student::student(const student &X)
    {
        age=X.age;
        strcpy(name,X.name);
        strcpy(father,X.father);
    }
    void student::putdata()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Fathers Name = "<<father<<endl;
        cout<<"Age = "<<age<<endl<<endl;
    }
int main()
{
    student s;
    student s1(s);
    student s2=s1;
    s.putdata();
    s1.putdata();
    s2.putdata();
    return 0;
}