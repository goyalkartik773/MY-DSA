#include <iostream>
#include <vector>
using namespace std;
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    vector<int> a;
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            a.push_back(arr[mid]);
            if ((arr[mid + 1] - arr[mid]) < (arr[mid] - arr[mid - 1]))
                a.push_back(arr[mid + 1]);
            else if ((arr[mid + 1] - arr[mid]) == (arr[mid] - arr[mid - 1]))
            {
                if (arr[mid + 1] < arr[mid - 1])
                    a.push_back(arr[mid + 1]);
                else
                    a.push_back(arr[mid - 1]);
            }
            else
                a.push_back(arr[mid - 1]);
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return a;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 6};
    int k = 4;
    int x = 3;
    vector<int> a = findClosestElements(arr, k, x);
    for (int i = 0; i < a.size(); i++)
    {
        cout << arr[i] << " ";
    }
}