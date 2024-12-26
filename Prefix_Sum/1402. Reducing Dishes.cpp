#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    int maxSatisfaction(vector<int> &arr)
    {
        // step-1 sort the given arr t.c --> O(nlogn)
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<int> suff(n, 0);
        suff[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suff[i] = suff[i + 1] + arr[i];
        }
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (suff[i] > 0)
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            return 0;
        int sum = 0;
        int temp = 1;
        for (int i = idx; i < n; i++)
        {
            sum = sum + arr[i] * temp;
            temp++;
        }
        return sum;
    }
};
int main()
{
}