#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    int cls;
    int rollno;
    public:
    void getdata();
    void putdata();
};
    void student::getdata()
    {
        cout<<"Enter name of student : ";
        cin>>name;
        cout<<"Enter class of Student = ";
        cin>>cls;
        cout<<"Enter Roll number = ";
        cin>>rollno; 
    }
    void student::putdata()
    {
        cout<<"Name of student is "<<name<<endl;
        cout<<"Class of student is "<<cls<<endl;
        cout<<"Roll number is "<<rollno<<endl;
    }

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    return 0;
}