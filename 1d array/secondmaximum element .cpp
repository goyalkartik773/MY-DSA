#include<iostream>
#include<climits>
using namespace std;
int main()
{   int arr[5]={1,2,3,4,5};
    int max=INT_MIN;
    int min=INT_MAX;
    int secmax=arr[0];
    int secmin=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=max&&secmax<arr[i])
        secmax=arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=min && secmin>arr[i])
        secmin=arr[i];
    }
    cout<<"Maximum value of the array is "<<max<<endl;
    cout<<"Second maximum value of the array is "<<secmax<<endl;
    cout<<"Minimum value of the array is "<<min<<endl;
    cout<<"Second minimum value of the array is "<<secmin<<endl;
}