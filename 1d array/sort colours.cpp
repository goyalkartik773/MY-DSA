#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector<int>nums {1,2,1,0,0,1,2,0};
//         int noz=0;
//         int noo=0;
//         //int not=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)
//             noz++;
//             else if(nums[i]==1)
//             noo++;
//             // else
//             // not++;
//         }
//         int x=noz+noo;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(i<noz)
//             nums[i]=0;
//             else if(i>=noz && i<x)
//             nums[i]=1;
//             else
//             nums[i]=2;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<" ";
//         }
cout<<"One pass method "<<endl;
int low=0;
int mid=0;
int high=nums.size()-1;
int temp;
while(mid<=high)
{
    if(nums[mid]==2)
    {
       temp=nums[mid];
       nums[mid]=nums[high];
       nums[high]=temp;
       high--;
    }
    else if(nums[mid]==0)
    {
        temp=nums[mid];
        nums[mid]=nums[low];
        nums[low]=temp;
        low++,mid++;
    }
    else if(nums[mid]==1)
    {
        mid++;
    }
}
for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";
}


        
    }
