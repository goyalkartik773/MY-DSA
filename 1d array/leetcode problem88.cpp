#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>& nums1,int m,vector<int>& nums2,int n)
{
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0&&j>=0)
    {
        if(nums1[i]<=nums2[j])
        {
          nums1[k]=nums2[j];
          k--,j--;
        }
        else if(nums1[i]>nums2[j])
        {
            nums1[k]=nums1[i];
            k--,i--;
        }
    }
    if(j<=0)
    {
        while(i>=0)
        {
            nums1[k]=nums1[i];
            k--,i--;
        }
    }
    if(i<=0)
    {
        while(j>=0)
        {
            nums1[k]=nums2[j];
            k--,j--;
        }
    }
    for (int p = 0; p < nums1.size(); p++)
    {
        cout << nums1[p] << " ";
    }
}
int main()
{
    vector<int>nums1 {1,2,3,0,0,0};
    vector<int>nums2 {2,5,6};
    int n=nums2.size();
     int m=nums1.size()-n;
    mergesort(nums1,m,nums2,n);
}
