#include <iostream>
#include <queue>
using namespace std;
void heap_sort(int arr[], int n)
{
    // time complexity o(nlogn); // space complexity o(n);
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    int idx = 0;
    while (pq.size() != 0)
    {
        arr[idx] = pq.top();
        pq.pop();
        idx++;
    }
}
int main()
{
    int arr[] = {100,19,78,32,15,63};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele:arr)
    cout<<ele<<" ";
    heap_sort(arr,n);
    cout<<endl;
    for(int ele:arr)
    cout<<ele<<" ";
}