#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    vector<int> arr(height.size());
    vector<int> brr(height.size());
    vector<int> crr(height.size());
    int min = -1;
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
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    // next greatest element array
    for (int i = height.size() - 2; i >= 0; i--)
    {
        if (min < height[i])
        {
            brr[i] = min;
            min = height[i];
        }
        else
        {
            brr[i] = min;
        }
    }
    cout << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
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
    cout << endl;
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
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
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int trapwater = trap(height);
    cout << trapwater;
}