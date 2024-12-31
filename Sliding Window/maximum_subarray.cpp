#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = arr.size();
    int k = 3; // size of the window
    int maxsum = INT_MIN;
    int maxidx = INT_MIN;
    // t.c --> O(n*k) very bad
    // for(int i=0;i<n-k+1;i++){
    //     int sum = 0;
    //     // this inner loop will find the sum of all windows
    //     for(int j=i;j<i+k;j++){
    //         sum  = sum + arr[i];
    //     }
    //     if(maxsum<sum){
    //         maxsum = sum;
    //         maxidx = i;
    //     }
    // }

    // solving using sliding window algorithm t.c --> O(n)
    int prev_sum = 0;
    for (int i = 0; i < k; i++)
    {
        prev_sum = prev_sum + arr[i];
    }
    maxsum = prev_sum;
    int i = 1;
    int j = k;
    while (j < n)
    {
        int curr_sum = prev_sum + arr[j] - arr[i - 1];
        if (maxsum < curr_sum)
        {
            maxsum = curr_sum;
            maxidx = i;
        }
        prev_sum = curr_sum;
        j++;
        i++;
    }
    cout << "maximum sum of window " << k << " is " << maxsum << endl;
    cout << "window is " << "{" << maxidx << "," << maxidx + 1 << "," << maxidx + 2 << "}";
}