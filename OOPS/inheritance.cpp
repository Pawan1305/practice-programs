#include<iostream>
using namespace std;
class base 
{
    int a;
    public:
    void display(int num)
    {
        a=num;
        cout<<"a = "<<a<<endl<<"Base Class\n";
    }
};
class derived:public base
{
    int num2;
    public:
    void display(int unnum)
    {
        num2=unnum;
        cout<<"num2 = "<<num2<<endl;
        cout<<"Derived class\n";
    }
};
int main()
{
    base b;
    b.display(100);
    derived d;
    d.display(500);    
    return 0;
}