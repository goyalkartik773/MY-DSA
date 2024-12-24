#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,2,9,7,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<bool> flag(n,false);
    for(int i=0;i<n;i++)
    {
        if(flag[i]==true)
        continue;  // upper wala loop chalega
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
           { flag[j]=true;
            count++;}
        }
        cout<<arr[i]<<" occurs "<<count<<" time"<<endl;

    }


}