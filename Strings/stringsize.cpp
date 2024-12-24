#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Kartik";// har string ka last character null hota hai
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<": size of string is "<<count<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<str[i]<<" ";
    }
}