#include <iostream>
#include <stack>
using namespace std;
int main()
{   stack<int> st;
    stack<int> temp1;
    stack<int> temp2;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "Correct order :\n";
    while (st.size() != 0)
    {
        cout << st.top() << " ";
        temp1.push(st.top());
        st.pop();
    }
    while (temp1.size() != 0)
    {
        temp2.push(temp1.top());
        temp1.pop();
    }
    while (temp2.size() != 0)
    {
        st.push(temp2.top());
        temp2.pop();
    }
    cout << endl;
    cout << "reverse order :\n";
    while (st.size() != 0)
    {
        cout << st.top() << " ";
        st.pop();
    }
}