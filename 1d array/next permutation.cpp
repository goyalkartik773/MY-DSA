#include<iostream>
#include<vector>
using namespace std;
void reversepart(vector<int>& nums,int i,int j)
{   
    int temp;
     while(j>i)
     {
     temp=nums[i];
     nums[i]=nums[j];
     nums[j]=temp;
     i++;
     j--;
     }

}
void display(vector<int>& nums)
{
     for(int p=0;p<nums.size();p++)
    {
        cout<<nums[p]<<" ";
    }
}
void nextpermutation(vector<int>& nums)
{
    int n=nums.size();
    int pvtindx=0;
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
          pvtindx=i;
          break;
        }
    }
    if(pvtindx==0)
    {
        reversepart(nums,0,n-1);
    }
    else
    {
    reversepart(nums,pvtindx+1,n-1);
    int temp;
    int x=-1;
    for(int i=pvtindx+1;i<n;i++)
    {
        if(nums[i]>nums[pvtindx])
        {
            x=i;
            break;
        }
    }
    temp=nums[pvtindx];
    nums[pvtindx]=nums[x];
    nums[x]=temp;
    }
    display(nums);

}
int main()
{
    vector<int> nums{2,3,1};
    nextpermutation(nums);
}