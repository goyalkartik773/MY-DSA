#include<iostream>
#include<vector>
using namespace std;
int firstoccurance(vector<int>& arr,int x)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        {
            if(arr[mid-1]==x)
            {
                high=mid-1;
            }
            else
            return mid;
        }
        else if(arr[mid]<x)
        low=mid+1;
        else if(arr[mid]>x)
        high=mid-1;
    }
    return -1;
}
int  main()
{
    vector<int> arr{1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x=2;
    cout<<" fist occurance of x is "<<firstoccurance(arr,x);

}
