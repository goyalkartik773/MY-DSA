#include <iostream>
#include<string>
#include<vector>
using namespace std;
void subsequence(vector<int> ans,vector<int> orignal,int idx,vector<vector<int>> &v,int k)
{
    if(orignal.size()==idx)
    {   
        if(ans.size()==k)
        v.push_back(ans);
        return;
    }

    int ele=orignal[idx];
    subsequence(ans,orignal,idx+1,v,k);
    ans.push_back(ele);
    subsequence(ans,orignal,idx+1,v,k);
}
int main()
{
    vector<int> arr{1,2,3,3};
    vector<int> brr;
    vector<vector<int>>v;
    subsequence(brr,arr,0,v,3);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ,";
        }
        cout<<endl;
    }
    return 0;
}