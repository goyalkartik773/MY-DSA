#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,5,3,2,0};
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
    //     {
    //         cout<<arr[i]<<" "<<i;
    //         break;
    //     }
    int low=0;
    int high=4;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
        {
            cout<<arr[mid];
            break;
        }
       else if(arr[mid]<arr[mid-1])
        high=mid+1;
        else if(arr[mid]>arr[mid-1])
        low=mid+1;
    }
   // cout<<arr[low];

    }
