#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    //To type anything in file 
    ofstream out("sample.txt");
    string str;
    cout<<"Type Anything : ";
    getline(cin,str);
    out<<str;
    out.close();

    //to read anything from file
    ifstream in;
    in.open("sample.txt");
    string str2;
    while(in.eof()==0)
    {
        getline(in,str2);
        cout<<str2;
    }
    in.close();
    return 0;
}