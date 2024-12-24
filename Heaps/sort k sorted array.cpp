#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// time complexity is  nlog(k) + k log(k) = n log(k) sahi hai as compare to using built in sort
vector<int> k_sorted_arr(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k + 1)
        {
            v.push_back(pq.top());
            pq.pop();
        }
    }
    while (pq.size() != 0)
    {
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}
int main()
{
    int arr[] = {6,5,3,2,8,10,9};
    for(int ele : arr)
    cout<<ele<<" ";
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = k_sorted_arr(arr,n,3);
    cout<<endl;
    for(int ele : ans)
    cout<<ele<<" ";
}