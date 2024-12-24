#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    vector<int> arr(height.size());
    vector<int> brr(height.size());
    vector<int> crr(height.size());
    int min = -1, max = -1;
    int water = 0;
    // previous greatest element array
    for (int i = 0; i < height.size(); i++)
    {
        if (min < height[i])
        {
            arr[i] = min;
            min = height[i];
        }
        else
        {
            arr[i] = min;
        }
    }
    // next greatest element array
    for (int i = height.size() - 1; i >= 0; i--)
    {
        if (max < height[i])
        {
            brr[i] = max;
            max = height[i];
        }
        else
        {
            brr[i] = max;
        }
    }
    // smaller value from both array
    for (int i = 0; i < height.size(); i++)
    {
        if (arr[i] < brr[i])
        {
            crr[i] = arr[i];
        }
        else
        {
            crr[i] = brr[i];
        }
    }
    // comparing height with crr to get water
    for (int i = 0; i < height.size(); i++)
    {
        if (height[i] < crr[i])
        {
            water += (crr[i] - height[i]);
        }
    }
    return (water);
}
int main()
{
    vector<int> height{4, 2, 0, 3, 2, 5};
    int trapwater = trap(height);
    cout << trapwater;
}
