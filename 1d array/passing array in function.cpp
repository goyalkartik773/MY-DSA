#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void change(int arr[],int size)
{
    arr[0]=11;
    arr[1]=22;
    arr[2]=33;
    arr[3]=44;
    arr[4]=55;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);

}