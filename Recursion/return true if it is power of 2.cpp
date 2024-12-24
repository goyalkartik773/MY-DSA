#include<iostream>
#include<math.h>
using namespace std;
bool power(int x)
{
    if(x==1)
    return true;
    if(x%2==0)
   return power(x/2);
    else
    return false;

}
int main()
{
    // int x=32;
    // for(int i=0;i<5;i++)
    // {
    //     if(pow(2,i)==x)
    //     {
    //         cout<<"hurrah";
    //         break;
    //     }
    // }
    // int low=0,index;
    // int high=x;
    // while(low<=high)
    // {
    //   int mid=low+(high-low)/2;
    //   if(pow(2,mid)==x)
    //   {
    //         cout<<"hurrah "<<mid;
    //         break;
    //     }
    //     else if(pow(2,mid)<x)
    //     low=mid+1;
    //     else
    //     high=mid-1;

    // }
    int x=5;
    if(power(x))
    cout<<"hurrah";
    else
    cout<<"noo";
    
}