#include <iostream>
#include <queue>
using namespace std;
int kth_largest_element(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
int main()
{
    int arr[] = {10, 20, -4, 6, 8, 90, 12, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << kth_largest_element(arr, n, 3); // 20
}