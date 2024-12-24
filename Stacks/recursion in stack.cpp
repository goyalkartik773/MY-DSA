#include <iostream>
#include <stack>
using namespace std;
// normal stack mai ek extra stack use hota tha yaha bhi use hota hai usse call stack kehta hai
void display(stack<int> &st) // har recursion mai variables ki value alg hoti hai per stack ki value same rahegi her call mai kyuki ye pass by refrence pass hui hai
{
    if (st.size() == 0)
        return;
    cout << st.top() << " ";
    st.pop();
    display(st);
}
void displayrev(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    displayrev(st);
    cout << x << " ";
}
void push_at_end(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val); // jab vector khali ho raha hoga jab
        return;
    }
    int x = st.top();
    st.pop();
    push_at_end(st, val);
    st.push(x);
}
void reversestack(stack<int> &st)
{

    if (st.size() == 0)
        return;

    int x = st.top();
    st.pop();
    reversestack(st);
    push_at_end(st, x);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //  display(st);
    // displayrev(st);
    // push_at_end(st, 5);
    reversestack(st);
    display(st);
}