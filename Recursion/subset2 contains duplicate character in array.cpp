#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// void helper(vector<int> &ans, vector<int> &orignal, vector<vector<int>> &finalans, bool flag, int idx)
// {
//     if (orignal.size() == idx)
//     {
//         finalans.push_back(ans);
//         return;
//     }
//     int ele1 = orignal[idx];
//     int ele2 = orignal[idx + 1];
//     if (ele1 == orignal[idx + 1])
//     {
//         if (flag == true)
//         {
//             ans.push_back(ele1);
//             helper(ans, orignal, finalans, true, idx + 1);
//         }
//         helper(ans, orignal, finalans, false, idx + 1);

//     }
//     else
//     {
//         if (flag == true)
//         {
//             ans.push_back(ele1);
//             helper(ans, orignal, finalans, true, idx + 1);
//         }
//         helper(ans, orignal, finalans, true, idx + 1);

//     }
// }
void helper(vector<int> &ans, vector<int> &orignal, vector<vector<int>> &finalans, bool flag, int idx)
{
    if (orignal.size() == idx)
    {
        finalans.push_back(ans);
        return;
    }
    int ele1 = orignal[idx];
    if (flag == true)
    {
        ans.push_back(ele1);
        helper(ans, orignal, finalans, true, idx + 1);
        ans.pop_back();
    }
    if (idx < orignal.size() - 1 && ele1 == orignal[idx + 1])
        helper(ans, orignal, finalans, false, idx + 1);
    else
        helper(ans, orignal, finalans, true, idx + 1);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> finalans;
    vector<int> ans;
    helper(ans, nums, finalans, true, 0);
    return finalans;
}
int main()
{
    vector<int> arr{4, 4, 1, 4, 4};
    sort(arr.begin(), arr.end());
    vector<vector<int>> x = subsetsWithDup(arr);
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}