#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int x;
    cout<<"Enter the number of which you want the doublet sum"<<endl;
    cin>>x;
    cout<<"doublet indexes are "<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==x)
            cout<<"("<<i<<","<<j<<")"<<" ";
        }
    }
    cout<<"\ndoublet values are "<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==x)
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
    }
}