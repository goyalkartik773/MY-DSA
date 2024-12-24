#include<iostream>
using namespace std;
// parameterised method
// void print(int i,int n)
// {
//   if(i>n)
//   return;
//   cout<<i<<endl;
//   print(i+1,n);
// }
//  after call;
void print(int n)
{
    if(n==0)
    return ;
    print(n-1);
    cout<<n<<endl;// back function call hoga to jo local variable ki value uss function mai hai wahi print hogi
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    //print(1,n);
    print(n);// after call
}