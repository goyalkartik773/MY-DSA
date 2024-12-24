#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of students"<<endl;
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the marks of "<<i+1<<" student"<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        if(marks[i]<35)
        cout<<"roll no of that student whon scores less than 35 is "<<i+1<<" and marks is "<<marks[i]<<endl;
    }
}