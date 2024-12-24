#include<iostream>
using namespace std;
// parameterised method
// void sum(int sum1,int n)
// {
//     if(n==0)
//     {
//         cout<<sum1;
//         return ;
//     }
//     // sum1+=n;
//     sum(sum1+n,n-1);
// }

// recursion
// base case
// kaam
// function callo
// kaam
// return 

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);//  reccurance relation
}
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<sum(n);
}