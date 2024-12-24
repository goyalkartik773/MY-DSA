#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(stack<int> &st)
{
    stack<int> temp;
    stack<int> helper;
    while (st.size() != 0)
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() != 0)
    {
        helper.push(temp.top());
        temp.pop();
    }
    while (helper.size() != 0)
    {
        st.push(helper.top());
        helper.pop();
    }
}
int main()
{
    queue<int> q;
    stack<int> st;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    // Method 1

    // while (q.size() != 0)
    // {
    //     st.push(q.front());
    //     q.pop();
    //     for (int i = 0; i < q.size() / 2; i++)
    //     {
    //         q.push(q.front());
    //         q.pop();
    //     }
    // }
    // display(st);
    // cout<<endl;
    // while(st.size()!=0)
    // {
    //     q.push(st.top());
    //     st.pop();
    // }

    // Method 2
    
    // step 1 first half of queue ko stack mai dalkar push kardo
    for(int i=1;i=q.size()/2;i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0)
    {
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i=q.size()/2;i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(st.size()!=0)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // q.push(q.front());
    // q.pop();
    while(q.size()!=0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}