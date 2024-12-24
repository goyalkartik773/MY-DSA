#include<iostream>
#include<vector>
using namespace std;
void reversepart(vector<int>& v,int i,int j)
{    int temp;
    if(i<=j)
    {
        while(i<j)
        {
               temp=v[i];
               v[i]=v[j];
               v[j]=temp;
               i++;
               j--;
        }
    }
    
}
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>v {1,6,2,3,7,4};
    int k;
    cout<<"Enter the steps by which you want to rotate the array"<<endl;
    cin>>k;
   if(k<=v.size())
   {
    reversepart(v,0,v.size()-1);
    reversepart(v,0,k-1);
    reversepart(v,k,v.size()-1);
   }
   else if(k>v.size())
   {
    k%=v.size();
    reversepart(v,0,v.size()-1);
    reversepart(v,0,k-1);
    reversepart(v,k,v.size()-1);
   }

    display(v);

}
