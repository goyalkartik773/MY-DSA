#include <iostream>
#include <vector>
#include <string>
using namespace std;

void helper(vector<int> ans, vector<int> &orignal, vector<vector<int>> &finalans, int idx)
{
    if (orignal.size() == idx)
    {
        finalans.push_back(ans);
        return;
    }
    helper(ans, orignal, finalans, idx + 1);
    ans.push_back(orignal[idx]);
    helper(ans, orignal, finalans, idx + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> ans;
    vector<vector<int>> finalans;
    helper(ans, nums, finalans, 0);
    return finalans;
}

int main()
{
    vector<int> nums{1, 2, 3,4};
    vector<vector<int>> arr;
    arr = subsets(nums);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}