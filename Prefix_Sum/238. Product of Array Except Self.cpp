#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // method -1 using division operator 

        // vector<int> ans(nums.size(),0);
        // int prod = 1;
        // for(int i=0;i<nums.size();i++){
        //     prod = prod * nums[i];
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         ans[i] = prod / nums[i];
        //     }
        //     else{
        //         int product = 1;
        //         int idx = i;
        //         for(int i=0;i<nums.size();i++){
        //             if(idx!=i){
        //                 product = product * nums[i];
        //             }
        //         }
        //         ans[idx] = product;
        //     }
        // }
        // return ans;

        // method -2 using without division operator;
        vector<int> pre_prod(nums.size(),0);
        vector<int> suff_prod(nums.size(),0);
        vector<int> ans(nums.size(),0);
        pre_prod[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            pre_prod[i] = pre_prod[i-1] * nums[i];
        }
        suff_prod[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            suff_prod[i]=suff_prod[i+1]  * nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i==0)
            ans[i] = suff_prod[i+1];
            else if(i==nums.size()-1)
            ans[i] = pre_prod[i-1];
            else
            ans[i] = pre_prod[i-1]*suff_prod[i+1];
        }
        return ans;
    }
};
int main(){
    Solution obj1;
    vector<int> arr = {1,2,3,4};
    vector<int> ans = obj1.productExceptSelf(arr);
    for(int ele:ans)
    cout<<ele<<" ";
}