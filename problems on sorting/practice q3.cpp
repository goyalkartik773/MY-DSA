 #include<iostream>
 #include<math.h>
 using namespace std;
 int main()
 {
    int arr[7]={1,2,3,4,5,5,6};
    int n=7;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==mid+1)
        low=mid+1;
        else if(arr[mid]<mid+1)
        high=mid-1;

    }
    cout<<arr[low];
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=i+1)
    //     {
    //         cout<<arr[i];
    //         break;
    //     }
    // }
 }