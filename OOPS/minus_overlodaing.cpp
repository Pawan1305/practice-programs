#include<iostream>
using namespace std;
class time
{
    int minutes;
    int hours;
    public:
    time()
    {
        minutes=hours=0;
    }
    void gettime()
    {
        cout<<"Enter Hours = ";
        cin>>hours;
        cout<<"Enter minutes = ";
        cin>>minutes;
    }
    void display();
    time operator -(time x)
    {
        time temp;
        temp.hours=hours-x.hours;
        temp.minutes=minutes-x.minutes;
        if(temp.minutes<0)
        {
            temp.hours--;
            temp.minutes=60+temp.minutes;
        }
        return (temp);
    }
};
void time::display()
{
    cout<<"Hours = "<<hours<<endl;
    cout<<"Minutes = "<<minutes<<endl;
}
int main()
{
    time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3=t1-t2;
    t3.display();
    return 0;
}