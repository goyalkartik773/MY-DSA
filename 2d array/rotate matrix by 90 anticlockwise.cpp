#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int temp;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<j)
            {
             temp=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=temp;

            }
        }
    }
    for(int j=0;j<4;j++)
    {
        int p=0;
        int q=3;
        while(p<q)
        {
            temp=arr[p][j];
            arr[p][j]=arr[q][j];
            arr[q][j]=temp;
            p++,q--;
        }
    }
    for(int i=0;i<4;i++)
    {
     for(int j=0;j<4;j++)
     {
        cout<<arr[i][j]<<" ";
     }
     cout<<endl;
    }

}