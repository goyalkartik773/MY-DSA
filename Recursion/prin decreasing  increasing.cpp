#include<iostream>
using namespace std;
void print(int i,int n)
{
    if(i>n)
    return;
   cout<<i<<" ";
   print(i+1,n);
   if(i>1)
   cout<<i-1<<" ";
}

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    print(1,n);

}