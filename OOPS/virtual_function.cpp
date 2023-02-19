#include<iostream>
using namespace std;
class base
{
    int base_var;
    public:
    //Due to virtual keyword the pointer of base class[in main()] is ignoring display function of base class
    //void display(int num)
    virtual void display(int num)
    {
        base_var=num;
        cout<<endl<<"Function of Base class is running"<<endl;
        cout<<"Number = "<<base_var<<endl;
    }
};
class derived:public base
{
    int der_var;
    public:
    void display(int);
};
void derived::display(int num)
{
    der_var=num;
    cout<<endl<<"Function of Derived class is running"<<endl;
    cout<<"Number = "<<der_var<<endl;
}
int main()
{
    base *ptr;
    derived obj;
    ptr = &obj;
    //(*ptr).display(12);  OR
    ptr->display(20);
//Due to virtual keyword in function of base class this pointer is displaying the function of that object which is pointed by this pointer
    return 0;
}