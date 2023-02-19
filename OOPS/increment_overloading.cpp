#include<iostream>
using namespace std;
class base
{
    int a,b,c;
    public:
    void sum();
    void operator ++()
    {
        c++;
        cout<<"1 + Sum = "<<c<<endl;
    }
    void operator ++(int x)
    {
        c++;
        cout<<"1 + Sum = "<<c<<endl;
    }
    void display();
};
void base::sum()
{
    cout<<"Enter first number = ";
    cin>>a;
    cout<<"Enter second number = ";
    cin>>b;
    c=a+b;
}
void base::display()
{
    cout<<"Sum = "<<c<<endl;
}
int main()
{
    base obj;
    obj.sum();
    obj.display();
    ++obj;
    obj++;
   return 0;
}