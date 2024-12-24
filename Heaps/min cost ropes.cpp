#include <iostream>
#include <queue>
using namespace std;
int min_cost(int arr[], int n)
{
    int count = 0;
    priority_queue<int, vector<int>, greater<int>> pq; // min heap;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    while (pq.size() != 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        count += x + y;
        pq.push(x + y);
    }
    return count;
}
int main()
{
    int arr[] = {4,3,2,6};
    cout<<min_cost(arr,sizeof(arr)/sizeof(arr[0]));
}