#include<iostream>
using namespace std;
int main()
{
    int *arr,size,i;
    cout<<"Enter Size of Array = ";
    cin>>size;
    arr = new int [size];
    for(i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<" = ";
        cin>>arr[i];
    }
        cout<<"Elements are : ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}