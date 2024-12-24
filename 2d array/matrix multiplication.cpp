#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"Enter no of row for matrix 1";
    cin>>m;
    cout<<"Enter no of columns for matrix 1";
    cin>>n;
    cout<<"Enter no of row for matrix 2";
    cin>>p;
    cout<<"Enter no of columns for matrix 2";
    cin>>q;
    int arr[m][n];
    int brr[p][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the element of matrix1 at index "<<"( "<<i<<","<<j<<" )";
            cin>>arr[i][j];
        }
    }
        for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<"Enter the element of matrix2 at index "<<"( "<<i<<","<<j<<" )";
            cin>>brr[i][j];
        }
    }
    int crr[m][q];
    if(n==p)
    {
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                {
                 sum= sum+ arr[i][k]*brr[k][j]; 
                }
                crr[i][j]=sum;

            }
        }
    }
    else
    cout<<" Matrix multiplication is not possible ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}