#include<iostream>
using namespace std;
class xyz;
class abc
{
    int a;
    public:
    void getdata(int temp)
    {
        a=temp;
    }
    void display()
    {
        cout<<"First Number  = "<<a<<endl;
    }
    friend void swap(abc &,xyz &);
};
class xyz
{
    int b;
    public:
    void getdata(int temp)
    {
        b=temp;
    }
    void display()
    {
        cout<<"Second Number  = "<<b<<endl;
    }
    friend void swap(abc &,xyz &);
};
void swap(abc &x,xyz &y)
{
    int temp;
    temp=x.a;
    x.a=y.b;
    y.b=temp;
}
int main()
{
    abc o1;
    xyz o2;
    int num1,num2;
    cout<<"Enter First number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    o1.getdata(num1);
    o2.getdata(num2);
    swap(o1,o2);
    cout<<endl<<"After Swapping"<<endl<<endl;
    o1.display();
    o2.display();
    return 0;
}