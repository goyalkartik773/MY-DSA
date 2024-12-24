#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 2, 3, 4, 8, 9, 10};
    // order(n) time complexity linear approach;

    // for(int i=0;i<arr.size();i++)
    // {
    //     if(arr[i]!=i)
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }

    // order(log n) approach binary search
    int low = 0;
    int high = arr.size() - 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid) // uss element ke piche jitna element hai unme search karne ki koi jaroorat nahi hai wo apni jagah per sahi hai or waha per koi bhi missing positive number nahi milega
        {
            low = mid + 1;
        }
        else
        {
            // ans = mid;  // agar answer mai store nahi karna to low mai required mid khud store ho jayega loop tootne ke baad
            high = mid - 1;
        }
    }
    cout << "Missing positive element in array is " << low;

}