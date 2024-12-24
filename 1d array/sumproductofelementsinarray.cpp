#include<iostream>
using namespace std;
int main()
{
      int i,n,sum=0,product=1;
      cout<<"Enter no of student"<<endl;
      cin>>n;
      int marks[n];
      for ( i = 0; i < n; i++)
      {
        cout<<"Enter the marks of "<<i+1<<" student"<<endl;
        cin>>marks[i];
      }
      for(i=0;i<n;i++)
      {
        sum+=marks[i];
        product*=marks[i];
      }
      cout<<"\n sum of marks of all the student is :: "<<sum<<endl;
      cout<<"\n product of marks of all the student is :: "<<product<<endl;

}