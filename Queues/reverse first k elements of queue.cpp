#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reversefirstkele(queue<int> &q, int k)
{
    int n = q.size() - k;
    stack<int> st;
    while (k != 0)
    {
        st.push(q.front());
        q.pop();
        k--;
    }
    while (st.size() != 0)
    {
        q.push(st.top());
        st.pop();
    }
    while (n != 0)
    {
        q.push(q.front());
        q.pop();
        n--;
    }
}
void display(queue<int> &q)
{
    int n = q.size();
    while (n > 0)
    {
        cout << q.front()<<" ";
        q.push(q.front());
        q.pop();
        n--;
    }
    cout<<endl;
}
int main()
{
     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
     reversefirstkele(q,5);
     display(q);
}