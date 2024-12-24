#include<iostream>
#include<stack>
using namespace std;
//operator+t2+t1
string postfix_to_prefix(string str)
{
    stack<string> st;
    int idx=0;
    while(idx<str.size())
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
            ans +=  str[idx]+t2+t1;
            st.push(ans);
        }
        idx++;
    }
    return st.top();
}
int main()
{
       string str="AB-DE+F*/";
       cout<<"postfix expression is "<<str<<endl;
       cout<<"prefix expression is "<<postfix_to_prefix(str);
}