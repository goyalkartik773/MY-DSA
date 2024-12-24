#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int target = 15;
    // using linear search search in a sorted array is not a good approach as it uses the time complexity of order n
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==target)
    //     {
    //         cout<<arr[i]<<"element is present in array ";
    //         break;
    //     }
    // }
    // using binary search
    int low = 0;
    int high = 8;
    while (low <= high)
    {
        int mid = low +( high - low) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid] << "element is present in array ";
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // agar apki value target value sai kaam hai to direct low ko mid sai bhi aga le chalo piche vale element to or bhi chote honge sorted array hai
        }
        else if (arr[mid] > target)
        {
            high = mid - 1; // high ko pich le aao mid sai bhi kyuki mid sai age jitni bhi value hogi wo jada hi honge target sai too
        }
    }
}