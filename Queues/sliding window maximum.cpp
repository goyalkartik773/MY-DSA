#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> ans;
    if (k == 1)
        return nums;
    for (int i = 0; i < nums.size(); i++)
    {
        while (dq.size() != 0 && nums[i] > nums[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        int j = i - k + 1;// it is the start of the window i jab window ke end pai ho to j start pr hoga uska formula hai yee
        while (dq.front() < j) // window sai piche ke elements hai jo hummme nahi chaiye
        {
            dq.pop_front();
        }
        if (i >= k - 1)
            ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main()
{
}