#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int longestOnes(vector<int> &arr, int k)
    {
        int i = 0;
        int j = 0;
        int coz = 0;
        int len = 0;
        int maxlen = INT_MIN;
        int n = arr.size();
        while (j < n)
        {
            if (arr[j] == 1)
            {
                j++;
            }
            else
            {
                if (coz < k)
                {
                    coz++;
                    j++;
                }
                else
                {
                    // apko ek valid window mil gayi hai
                    len = j - i;
                    maxlen = max(maxlen, len);
                    // reduce flip by one i ko first zero sai ek age le aao
                    while (arr[i] == 1)
                        i++;
                    i++;
                    j++;
                }
            }
        }
        len = j - i;
        maxlen = max(maxlen, len);
        return maxlen;
    }
};
int main()
{
}