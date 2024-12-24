#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans(2, -1);
    int n = nums.size();
    // first--occurance
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            if (mid == 0)
            {
                ans[0] = mid;
                break;
            }
            else if (nums[mid - 1] == target)
            {
                high = mid - 1;
            }
            else // matlab iss element ka pichla element target ke equal nahi hai
            {
                ans[0] = mid;
                break;
            }
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    // last--occurance
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            if (mid == n - 1)
            {
                ans[1] = mid;
                break;
            }
            else if (nums[mid + 1] == target)
            {
                low = mid + 1;
            }
            else
            {
                ans[1] = mid;
                break;
            }
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int main()
{
    vector<int> v{1};
    int target = 1;
    vector<int> x = searchRange(v, target);

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
