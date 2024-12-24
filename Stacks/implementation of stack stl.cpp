#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
  //  cout<<st.size()<<endl;
    st.push(10);  // size 1
    st.push(20);  // size 2
    st.push(30);
    st.push(40);
    st.push(50);  // size 5
    // cout<<st.size()<<endl;
    // st.pop();   // 50 removed size 4
    // st.pop();   // 40 removed size 3
    // cout<<st.size()<<endl;
    // cout<<st.top();

    //printing the value of the stack from the top to bottom;
    // but this way we loose the value of our stack and it prints the value from top to bottom of stack
    // while(st.size()!=0)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack<int> temp;  // storing the value of one stack to another to save it from reduction
        while(st.size()!=0)
    {
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    // print bottom to top and store element in same order in stack again
    while(temp.size()!=0)
    {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }

}