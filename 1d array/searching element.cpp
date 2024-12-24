#include<iostream>
using namespace std;
int main()
{       bool flag;
        int arr[5]={1,1,1,1,5};
        int x;
        cout<<"Enter the element you want to search "<<endl;
        cin>>x;
        for(int i=0;i<5;i++)
        {
            if(arr[i]==x)
            {
                flag=true;
                break;
            }
            else flag=false;
        }
        if(flag==true)
        {
            cout<<"Element "<<x<<" is present in array"<<endl;
        }
        else
         cout<<"Element "<<x<<" is not present in array"<<endl;
}