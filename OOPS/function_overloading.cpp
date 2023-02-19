#include<iostream>
using namespace std;
int add()
{
    int a,b,c;
    cout<<"Enter value of a = ";
    cin>>a;
    cout<<"Enter value of b = ";
    cin>>b;
    c=a+b;
    return c;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int sum;
    sum = add();
    cout<<"Sum = "<<sum<<endl;
    sum = add(10,20);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}