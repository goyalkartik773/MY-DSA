#include<iostream>
using namespace std;
// int power(int a,int b)
// {   int reacans=1;
//     for(int i=0;i<b;i++)
//     {
//         reacans*=a;
//     }
//     return reacans;
// }
// a is base // b is power
int power(int a,int b)
{  
    if(b==0)
    return 1;
    else if(b==1)
    return a;
    return a*power(a,b-1);// recurrance relation 
}
int main()
{
    int a,b;
    cout<<"Enter base value";
    cin>>a;
    cout<<"Enter power raised to base";
    cin>>b;
    int x=power(a,b);
    cout<<a<<"^"<<b<<" is "<<x;
}