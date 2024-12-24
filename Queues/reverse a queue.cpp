#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse(queue<int> &q)
{
    stack<int> st;
    while(q.size()!=0)
    {
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0)
    {
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int> &q)
{
    int idx=0;
    while(idx!=q.size())
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        idx++;
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
    q.push(6);
    display(q);
    reverse(q);
    display(q);
}