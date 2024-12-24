#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<" array element"<<endl;
        cin>>arr2[i];
    }
    cout<<"Elements of first array\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\n Elements of second array\n";
        for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
}