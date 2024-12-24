#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
void subsequence(vector<int> ans, vector<int> orignal, int idx, vector<vector<int>> &v, int k, bool flag)
{
    if (orignal.size() == idx)
    {
        if (ans.size() == k)
            v.push_back(ans);
        return;
    }

    int ele = orignal[idx];
    if (flag == true)
    {
        ans.push_back(ele);
        subsequence(ans, orignal, idx + 1, v, k, true);
        ans.pop_back();
    }
    if (idx < orignal.size() - 1 && ele == orignal[idx + 1])
        subsequence(ans, orignal, idx + 1, v, k, false);
    else
        subsequence(ans, orignal, idx + 1, v, k, true);
}

int main()
{
    vector<int> arr{ 50,-75};
    vector<int> brr;
    vector<vector<int>> v;
    sort(arr.begin(), arr.end());
    subsequence(brr, arr, 0, v, 2, true);
    vector<int> ans;
    int summax = INT_MIN;
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        int sumrow = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            sumrow += v[i][j];
        }
        if (summax < sumrow)
        {
            summax = sumrow;
            idx = i;
        }
    }
    for (int j = 0; j < v[idx].size(); j++)
    {
        ans.push_back(v[idx][j]);
    }
    for (int ele : ans)
        cout << ele << " ";
    return 0;
}
