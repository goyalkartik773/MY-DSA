#include <iostream>
#include <queue>
using namespace std;
void min_heapify_algorithm(int arr[], int n, int idx)
{
    while (true)
    {
        int leftchild = 2 * idx;
        int rightchild = 2 * idx + 1;
        if (leftchild > n)
            break;
        if (rightchild > n)
        {
            if (arr[leftchild] < arr[idx])
            {
                swap(arr[idx], arr[leftchild]);
                idx = leftchild;
            }
            break;
        }
        if (arr[leftchild] < arr[rightchild])
        {
            if (arr[leftchild] < arr[idx])
            {
                swap(arr[leftchild], arr[idx]);
                idx = leftchild;
            }
            else
                break;
        }
        else // arr[rightchild] < arr[leftchild]
        {
            if (arr[rightchild] < arr[idx])
            {
                swap(arr[rightchild], arr[idx]);
                idx = rightchild;
            }
            else
                break;
        }
    }
}
void max_heapify_algorithm(int arr[], int n, int idx)
{
    while (true)
    {
        int leftchild = 2 * idx;
        int rightchild = 2 * idx + 1;
        if (leftchild > n)
            break;
        if (rightchild > n)
        {
            if (arr[leftchild] > arr[idx])
            {
                swap(arr[idx], arr[leftchild]);
                idx = leftchild;
            }
            break;
        }
        if (arr[leftchild] > arr[rightchild])
        {
            if (arr[leftchild] > arr[idx])
            {
                swap(arr[leftchild], arr[idx]);
                idx = leftchild;
            }
            else
                break;
        }
        else // arr[rightchild] < arr[leftchild]
        {
            if (arr[rightchild] > arr[idx])
            {
                swap(arr[rightchild], arr[idx]);
                idx = rightchild;
            }
            else
                break;
        }
    }
}
int main()
{
    int arr[] = {10, 2, 14, 11, 1, 4};
    int n = sizeof(arr)/4;
    // n/2 nodes leaf hote hai to unko chodkar baaki sabhi elements ko unki sahi position per daldo kaam ho jayega
    for(int i = n/2; i>=0;i--)
    {
        max_heapify_algorithm(arr,n,i-1); // i-1 is pseudo index array 1 sai start mante hai
    }
    for(int ele:arr)
    cout<<ele<<" ";
}