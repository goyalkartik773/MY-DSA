#include<iostream>
using namespace std;
void greeting(int n)
{
    if(n==0)
    return ;
    cout<<"Good morning kartik sir\n";
    greeting(n-1); // function call jab khatam hoti hai jab return hokar compiler function ke pass hi ata hai
}
int main()
{
  int n;
  cout<<"Enter the value of n";
  cin>>n;
  greeting(n);
}