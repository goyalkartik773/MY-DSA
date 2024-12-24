#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = arr.size(), value = 0;
    int target = 5;
    // linear approach time complexity is order of n

    // for(int i=0;i<n;i++)
    // {
    // if(arr[i]<target)
    // {
    //     value=arr[i];
    // }
    // }
    // cout<<"Lower bound of x is "<<value<<endl;
    // for(int i=0;i<n;i++)
    // {
    // if(arr[i]>target)
    // {
    //     value=arr[i];
    //     break;
    // }
    // }
    // cout<<"upper bound of x is "<<value;

    // binary search method as the array is sorted
    // lower bound
     int low=0;
     int high=8;
     int flag=true;
     while(low<=high)
     {
         int mid= low+(high-low)/2;
         if(arr[mid]==target)
         {
             cout<<arr[mid-1];
             flag=false;
             break;
         }
         else if(arr[mid]<target)
         {
             low=mid+1;
         }
         else if(arr[mid]>target)
         {
             high=mid-1;
         }
     }
     if(flag==true)
     cout<<"LOwer bound of x is "<<arr[high]<<endl;
    // upper boud
    // int low = 0;
    // int high = 8;
    // int flag = true;
    // while (low <= high)
    // {
    //     int mid = low + (high - low) / 2;
    //     if (arr[mid] == target)
    //     {
    //         cout << arr[mid + 1];
    //         flag = false;
    //         break;
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         low = mid + 1;
    //     }
    //     else if (arr[mid] > target)
    //     {
    //         high = mid - 1;
    //     }
    // }
    // if (flag == true)
    //     cout << "Upperr bound of x is " << arr[low] << endl;
// direct inbuilt vector functions

//lower_bound(arr.begin(),arr.end(),target);
//upper_bount(arr.begin(),arr.end(),target);



}