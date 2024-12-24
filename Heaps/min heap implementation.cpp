#include <iostream>
using namespace std;
class minheap
{
private:
    int *arr;
    int idx;
public:
    minheap(int capacity)
    {
        arr = new int[capacity]; // this will be the capcity of your heap size agar capacity ke barbar hua too ye array hai direct error dega
        idx = 1;                 // array ke first element oth idx kahli rakhega for easy implementation
    }
    int top()
    {
        return arr[1];
    }
    void push(int value)
    {
        arr[idx] = value; // pahela value assign kardeg array mai
        // rearrangement kargea min heap mai top value minimum hoti hai
        // o(logk) k elements already present in heap ki time complexity lagakr push element hone ke baad jo minimum element hai usse top per leayega
        int it = idx; // index ki position change na hoo
        while (it != 1)
        {
            int parent = it / 2;
            if (arr[parent] > arr[it])
            {
                swap(arr[parent], arr[it]);
                it = parent;
            }
            else // inserted value already sahi positon per hai
            {
                break;
            }
        }
        idx++;
    }
    void pop()
    {
        idx--; // size reduced
        // rearrangement kargea min heap mai top value minimum hoti hai
        // o(logk) k elements already present in heap ki time complexity lagakr pop element hone ke baad jo minimum element hai usse top per leayega
        // humesha top element hi pop hoga
        arr[1] = arr[idx]; // top value delete hogayi
        int it = 1;
        while (true)
        {
            int leftchild = 2 * it;
            int rightchild = 2 * it + 1;
            if (leftchild > idx - 1) // ek hi element bacha hai array mai kya arrangement karoge
                break;
            if (rightchild > idx - 1) // abhi leftchild bakki hai
            {
                if (arr[leftchild] < arr[it])
                    swap(arr[it], arr[leftchild]);
                break;
            }
            if (arr[leftchild] < arr[rightchild])
            {
                if (arr[leftchild] < arr[it])
                {
                    swap(arr[it], arr[leftchild]);
                    it = leftchild;
                }
                else
                    break;
            }
            else // arr[rightchild] < arr[leftchild]
            {
                if (arr[it] > arr[rightchild])
                {
                    swap(arr[it], arr[rightchild]);
                    it = rightchild;
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
    minheap *pq;
    pq = new minheap(25);
    pq->push(10);
    pq->push(15);
    pq->push(19);
    pq->push(20);
    pq->push(30);
    pq->push(25);
    pq->push(39);
    pq->push(23);
    pq->push(40);
    pq->push(55);
    // cout << pq->top() <<" "<< pq->size()<< endl;
    pq->push(4);
    //  cout << pq->top() <<" "<< pq->size()<< endl;
    pq->pop();
    //   cout << pq->top() <<" "<< pq->size()<< endl;
    pq->pop();
    cout << pq->top() << " " << pq->size() << endl;
}