#include<iostream>
using namespace std;
int main()
{  // bubble sort is a stable sort;
    int arr[5]={5,1,2,3,4};
    int n=5,temp;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int k=0;k<n-1;k++)// agar total element n hai total passes n-1 hoga
    {   bool flag=false;
        for(int i=0;i<n-k-1;i++)// last element tak har baar iteration karne ki jaroorat nahi hai kyuki har pass ke bad last element apni sahi jagah per hi hoga
        {
           if(arr[i]>arr[i+1])//chota element ko left mai shift kardo haar baar
           {
            // temp=arr[i];
            // arr[i]=arr[i+1];
            // arr[i+1]=temp;
            swap(arr[i],arr[i+1]);
            flag=true;
           }
        }
        if(flag==false)
        {
            cout<<"early break\n";
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}