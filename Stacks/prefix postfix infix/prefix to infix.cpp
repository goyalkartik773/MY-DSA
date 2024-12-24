#include <iostream>
#include <stack>
using namespace std;
// '(' + t1 + operator + t2 + ')'
string prefix_to_infix(string str)
{
    stack<string> st;
    int idx = str.size() - 1;
    while (idx >= 0)
    {
        if (str[idx] >= 'A' && str[idx] <= 'Z' || str[idx] >= 'a' && str[idx] <= 'z' || str[idx] >= '0' && str[idx] <= '9')
        {
            st.push(string(1, str[idx]));
        }
        else
        {
            string ans;
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            ans += "(" + t1 + str[idx] + t2 + ")";
            st.push(ans);
        }
        idx--;
    }
    return st.top();
}
int main()
{
    string str="*+PQ-MN";
    cout<<"prefix expression is :"<<str<<endl;
    cout<<"infix expression is :"<<prefix_to_infix(str);
}