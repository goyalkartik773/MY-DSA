#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    vector<int> answerQueries(vector<int> &arr, vector<int> &queries)
    {
        vector<int> ans(queries.size(), 0);
        // step-1 sort the nuns array
        int n = arr.size();
        int m = queries.size();
        sort(arr.begin(), arr.end());
        // step->2 make the sorted array into its prefix sum
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] + arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            int len = 0;
            // instead of using O(n) approach use O(LOGN) approach by using
            // binary search as it is a sorted array for(int j=0;j<n;j++){
            //     if(arr[j]<=queries[i])
            //     len++;
            // }
            // ans[i] = len;
            int low = 0;
            int high = n - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (arr[mid] > queries[i])
                    high = mid - 1;
                else
                {
                    len = mid + 1;
                    low = mid + 1;
                }
            }
            ans[i] = len;
        }
        return ans;
    }
};
int main()
{
}