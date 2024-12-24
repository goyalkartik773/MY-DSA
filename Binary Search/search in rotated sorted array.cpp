#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int pivot = -1;
    // pivot lowest element of array hi hoga
    // agar apka array pahela sai hi sorted hai to pivot point nikalega hi nahi
    if (nums.size() == 2)
    {
        if (nums[0] == target)
            return 0;
        else if (nums[1] == target)
            return 1;
        else
            return -1;
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // 2more conditions if array will be sorted
        if (mid == 0)
        {
            low = mid + 1;
        }
        else if (mid == nums.size() - 1)
        {
            high = mid - 1;
        }
        else if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) // pivot yaaha to greatest element hoga
        {
            pivot = mid + 1;
            break;
        }
        else if (nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1]) // pivot yaha to lowest element hoga
        {
            pivot = mid;
            break;
        }
        else if (nums[mid] > high) // matlab wo element rotate hokar aya hai uske piche jitna element hoga wo chote hi hoga sorted hai naa hume greatest element nikalna hai to pichle wale sare element ko ignore kardo
        {
            low = mid + 1;
        }
        else // nums[mid]<high  mid sai agae sare element bade hai hume lowest chaiye to wo piche hi mmilega to aage ka workspace reduce kar diya
        {
            high = mid - 1;
        }
    }
    // array do sorted array mai break ho chuka hai dono mai individual binary search lagake target find karunga
    // first o to pivot-1;
    // second pivot to n-1;
    cout << "PIVOT is " << pivot << endl;
    if (pivot == -1)
    {
        // complete binary search from o to n-1 // isse bhi hum jab laga paaraha hai jab apka array sorted hai increasing order mai kyuki agar array decreasing order mai hot to direct binary search nahi lagti uss case ko manually handle karega
        low = 0;
        high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    else if (target >= nums[0] && target <= nums[pivot - 1])
    {
        // normal binary search
        low = 0;
        high = pivot - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            // if (mid == 0)
            //     low = mid + 1;
            // else if (mid == nums.size() - 1)
            //     high = mid - 1;
             if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else // nums[mid]<target
                low = mid + 1;
        }
    }
    else
    {
        // normal binary search
        low = pivot;
        high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v{3, 5,1};
    int target = 3;
    int index = search(v, target);
    cout << v[index] << " " << index;
}