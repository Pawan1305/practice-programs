#include<iostream>
using namespace std;
int main()
{
    int test,n,i;
    cin>>test;
    while(test--)
    {
    cin>>n;
    int arr[n],count=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        count++;
    }
    cout<<count<<endl;
    }
    return 0;
}