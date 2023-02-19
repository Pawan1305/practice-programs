#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:
    time()
    {
        hours=minutes=0;
    }
    void gettime()
    {
        cout<<"Enter Hours = ";
        cin>>hours;
        cout<<"Enter Minutes = ";
        cin>>minutes;
    }
    void addtime(int hr,int min)
    {
        hours+=hr;
        minutes+=min;
        if(minutes>=60)
        {
            hours++;
            minutes-=60;
        }
    }
    void showtime()
    {
        cout<<"Hours = "<<hours<<endl;
        cout<<"Minutes = "<<minutes<<endl;
    }
};
int main()
{
    time t;
    int hr,min;
    t.gettime();
    cout<<"Enter another hours = ";
    cin>>hr;
    cout<<"Enter another minutes = ";
    cin>>min;
    t.addtime(hr,min);
    t.showtime();
    return 0;
}