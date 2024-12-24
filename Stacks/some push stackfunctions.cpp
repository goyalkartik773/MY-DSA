#include <iostream>
#include <stack>
using namespace std;
void displaystack(stack<int> &st)
{
    stack<int> temp;
    while (st.size() != 0)
    {

        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() != 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
void push_at_end(stack<int> &st, int val)
{
    stack<int> temp;
    while (st.size() != 0)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size() != 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}
void push_at_idx(stack<int> &st, int val, int pos)
{
    stack<int> temp;
    while (st.size() != pos)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size() != 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displaystack(st);
   // push_at_end(st, 5);
   push_at_idx(st,39,0);
    displaystack(st);
}