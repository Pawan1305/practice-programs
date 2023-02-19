#include<iostream>
using namespace std;
class base
{
    int a;
    int b;
    public:
    base()
    {
        a=10;
        b=20;
    }
    void putdata()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }   
};
int main()
{
    base b;
    b.putdata();
    return 0;
}