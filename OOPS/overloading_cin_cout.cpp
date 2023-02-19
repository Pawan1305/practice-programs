#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:
    time operator +(time);
    friend istream & operator>>(istream &,time &);
    friend ostream & operator<<(ostream &,time &);
};
time time::operator +(time t)
 {
        time temp;
        temp.hours=hours+t.hours;
        temp.minutes=minutes+t.minutes;
        if(temp.minutes>60)
        {
            temp.hours++;
            temp.minutes-=60;
        }
        return (temp);
    }
istream & operator >>(istream &din,time &t)
{
    cout<<"Enter Hours = ";
    din>>t.hours;
    cout<<"Enter Minutes = ";
    din>>t.minutes;
    return (din);   
}
ostream & operator <<(ostream &dout,time &t)
{
    dout<<"Hours = "<<t.hours<<endl;
    dout<<"Minutes = "<<t.minutes<<endl;
    return(dout);
}
int main()
{
    time t1,t2,t3;
    cin>>t1;
    cin>>t2;
    t3=t1+t2;
    cout<<t3;
    return 0;
}