#include<iostream>
using namespace std;
int main()
{
    int arr[9]={5,0,1,2,0,0,4,0,3};
    int n=9,temp;
    // int low=0;
    // int high=n-1;
    // while(low<=high)
    // {
    //     if(arr[low]==0)
    //     {
    //         swap(arr[low],arr[high]);
    //         high--;
    //     }
    //     else if(high==0)
    //     {
    //         high--;
    //     }
    //     else 
    //     {
    //         low++;
    //     }
        
    // }
for(int k=0;k<n-1;k++)
{    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==0)
        {
            // if(arr[i]<arr[i+1])
            // {
            //     temp=arr[i];
            //     arr[i]=arr[i+1];
            //     arr[i+1]=temp;
            // }
            swap(arr[i],arr[i+1]);
            flag=true;
        }
    }
    if(flag==false)
    break;
 }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}