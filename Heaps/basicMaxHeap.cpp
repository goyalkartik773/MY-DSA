#include <iostream>
#include <queue> // it also contains priority queue
using namespace std;
int main()
{
    // time complexity  top o(1)  push/pop o(logn) // after push or pop elements ko rearrange karna padta hai top per sahi element lane ke liye

    priority_queue<int> pq; // by default max heap hota hai
    pq.push(10);
    pq.push(4);
    pq.push(-1);
    pq.push(8);
    cout << pq.top(); // top will contain the maximum value of heap so maximum value will be printed
    // other than top value in priority queue are not in any order
    pq.pop();
    cout << endl;
    cout << pq.top(); // jitne elements heap mai hai after pop usme jo maximum element hoga wo top per aajayega
    cout << endl
         << endl;
    // min heap mai minimum element top per hoga pop karne ke baad jo remaining elements sai minimum element top per hoga wo aajayega
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(-2);
    pq2.push(3);
    pq2.push(1);
    pq2.push(9);
    cout << pq2.top() << endl; // -2
    pq2.pop();
    cout << pq2.top() << endl; // 1
}