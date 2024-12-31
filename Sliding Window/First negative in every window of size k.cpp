#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, -3, 4, -7, -1, 4, -2, 6};
    // int n = arr.size();
    // vector<int> ans;
    int k = 3;
    // brute force t.c O(n-k+1*k)
    // for (int i = 0; i < n - k + 1; i++)
    // {
    //     for (int j = i; j < i + k; j++)
    //     {
    //         if (arr[j] < 0)
    //         {
    //             ans.push_back(arr[j]);
    //             break;
    //         }
    //     }
    // }

    // method -2 using sliding window algorithm
    vector<int> ans;
    int p = -1;
    int n = arr.size();
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            ans.push_back(arr[i]);
            p = i;
            break;
        }
    }
    if (p == -1)
        ans.push_back(0);
    int i = 1;
    int j = k;
    while (j < n)
    {
        if (p >= i)
        {
            ans.push_back(arr[p]);
        }
        else
        {
            int flag = false;
            for (int k = i; k <= j; k++)
            {
                if (arr[k] < 0)
                {
                    flag = true;
                    p = k;
                    break;
                }
            }
            if (flag == true)
                ans.push_back(arr[p]);
            else
                ans.push_back(0); // uss window mai koi negative element nahi mila
        }
        j++;
        i++;
    }
    for (int ele : ans)
    {
        cout << ele << " ";
    }
}