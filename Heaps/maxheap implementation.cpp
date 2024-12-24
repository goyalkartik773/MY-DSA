#include <iostream>
using namespace std;
class maxheap
{
private:
    int *arr; // dyanmic array
    int idx;

public:
    maxheap(int capacity)
    {
        arr = new int[capacity]; // capacity of the array tell by the user size can never be greater than the capacity and capacity cannot be change for a particular heap
        idx = 1;                 // start with first index for simple calculations
    }
    int top()
    {
        return arr[1]; // always be the maximum element
    }
    void push(int value)
    {
        arr[idx] = value;
        // rearrangement karke apko top per maximum element rakhna hai
        // t.c O(logk) k elements present in maxheap
        int it = idx;
        while (it != 1)
        {
            int parent = it / 2;
            if (arr[parent] < arr[it])
            {
                swap(arr[parent], arr[it]);
                it = parent;
            }
            else
                break;
        }
        idx++;
    }
    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        int it = 1;
        while (true)
        {
            int leftchild = 2 * it;
            int rightchild = 2 * it + 1;
            if (leftchild > idx - 1)
                break;
            if (rightchild > idx - 1)
            {
                if (arr[leftchild] > arr[it])
                {
                    swap(arr[leftchild], arr[it]);
                    it = leftchild;
                }
                break;
            }
            if (arr[leftchild] > arr[rightchild])
            {
                if (arr[leftchild] > arr[it])
                {
                    swap(arr[leftchild], arr[it]);
                    it = leftchild;
                }
                else
                    break;
            }
            else // arr[rightchild] > arr[leftchild]
            {
                if (arr[rightchild] > arr[it])
                {
                    swap(arr[rightchild], arr[it]);
                    rightchild = it;
                }
                else
                    break;
            }
        }
    }
    int size()
    {
        return idx - 1;
    }
};
int main()
{
    maxheap* pq = new maxheap(25); //capacity of our maxheap is 25
    pq->push(25);
    pq->push(45);
    pq->push(35);
    pq->push(30);
    cout<<"top of heap is:"<<pq->top()<<" size of maxheap is: "<<pq->size()<<endl;
    pq->push(60);
    cout<<"top of heap is:"<<pq->top()<<" size of maxheap is: "<<pq->size()<<endl;
    pq->pop();
    cout<<"top of heap is:"<<pq->top()<<" size of maxheap is: "<<pq->size()<<endl;
    pq->pop();
    cout<<"top of heap is:"<<pq->top()<<" size of maxheap is: "<<pq->size()<<endl;

}