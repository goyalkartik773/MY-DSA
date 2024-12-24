#include<iostream>
using namespace std;
int power(int a,int b)
{ // time complexity of this code is logn;
    if(b==1)
    return a;
    int ans=power(a,b/2);
    if(b%2==0)
    return ans*ans;//power(a,b/2)*power(a,b/2);// multiple calls
    else
    return 2*ans*ans;//2*power(a,b/2)*power(a,b/2); //koi fayda nahi hai aisa call lagna isse bhi time complexity big of n hi rahega

}
int main()
{
    int a=2,b;
    cout<<"Enter power raised to base";
    cin>>b;
    int x=power(2,b);
    cout<<"2"<<"^"<<b<<" is "<<x;
}