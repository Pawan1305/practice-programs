#include<iostream>
using namespace std;
class base
{
    public:
    base();
    ~base();
};
base::base()
{
    int a,b,c;
     cout<<"Constructor is running"<<endl;
    cout<<"Object created"<<endl;
    cout<<"Enter value of a = ";
    cin>>a;
    cout<<"Enter value of b = ";
    cin>>b;
    c=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<endl;
}
base::~base()
{
    cout<<"Destructor is running"<<endl;
    cout<<"Object destroyed"<<endl;
}
int main()
{
    base b;
    return 0;
}