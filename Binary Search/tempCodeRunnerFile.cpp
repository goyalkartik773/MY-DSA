#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<vector<int>> arr{{0, 0, 1, 1, 1}, {1, 1, 1, 1, 1}, {0, 0, 0, 1, 1}, {0, 1, 1, 1, 1}};
    int m = arr.size();    // no of rows;
    int n = arr[0].size(); // no of columns;
    int index = -1;
    int countones = 0;
    int maximumones = INT_MIN;
    int idx = 0;
    for (int i = 0; i < m; i++)
    {
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[i][mid] == 1)
            {
                if (arr[i][mid - 1] != 1) // yahi mid pai rakha 1 hi first occurance hai
                {
                    index = mid;
                    break;
                }
                else
                {
                    high = mid - 1;
                }
            }
            else if (arr[i][mid] < 1)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        countones = n - index;
        if (maximumones < countones)
        {
            maximumones = countones;
            idx = i;
        }
    }
    cout<<"Maximum no of ones present in row is "<<idx+1<<" with total 1s are : "<<maximumones;
}