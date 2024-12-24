#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<" no of elements in array is "<<n;
}