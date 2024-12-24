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
    vector<int>v {1,2,3,4,5};
    reversepart(v,0,0);
    display(v);

}
