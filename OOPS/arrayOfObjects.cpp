#include<iostream>
#include<string.h>
using namespace std;
class data
{
    char name[20];
    char father[20];
    int no;
    public:
    int getdata();
    void putdata();
};
    //cin>>name;  For name without spaces
    //fgets(name,20,stdin);
    //cin.ignore('\n');
int data::getdata()
{
    cout<<"Enter Name :- ";
    gets(name);
    cout<<"Enter Fathers name :- ";
    gets(father);
    cout<<"Enter Special number :- ";
    cin>>no;
    return 0;
}
void data::putdata()
{
    cout<<"Name :- "<<name<<endl;
    cout<<"Fathers name :- "<<father<<endl;
    cout<<"Special Number :- "<<no<<endl;
}
int main()
{
    data *d;
    int i,size;
    cout<<"Enter size = ";
    cin>>size;
    d=new data[size];
    for(i=0;i<size;i++)
    {
        cin.ignore(); //flush the buffer or we can say clear the input buffer
        d[i].getdata();
    }
    for(i=0;i<size;i++)
    {
        d[i].putdata();
    }
    return 0;
}