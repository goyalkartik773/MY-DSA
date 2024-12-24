#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int* ptr=arr;//int* ptr=arr[0];
    // cout<<ptr[0];
    // cout<<ptr[1];
    // cout<<ptr[2];
    // cout<<ptr[3];
    // cout<<ptr[4];
    for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<" ";
        // cout<<*ptr;
        // ptr++;
    }
}