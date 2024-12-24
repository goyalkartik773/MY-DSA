#include<iostream>
#include<string>
#include<stack>
using namespace std;
int priority(char ch)
{
    if(ch=='^')
    return 3;
    else if(ch=='*'||ch=='/')
    return 2;
    else if(ch=='+'||ch=='-')
    return 1;
    else
    return -1;
}
string infix_to_postfix(string str)
{
    string ans;
    stack<char> st;
    int idx=0;
    while(idx<str.size())
    {
        if(str[idx]>='A'&&str[idx]<='Z'||str[idx]>='a'&&str[idx]<='z'||str[idx]>='0'&&str[idx]<='9')
        {
            // agar koi alphabet dikhta hai to usse direct answer string mai append kardo
            ans+=str[idx];
        }
        else if(str[idx]=='(')
        {
            st.push(str[idx]);
        }
        else if(str[idx]==')')
        {
            while(st.size()!=0 && st.top()!='(')
            {
                    ans+=st.top();
                    st.pop();
            }
            st.pop();// opening bracket ko bhi pop() kardiya end mai jata jata
        }
        else // operator hi push hoga abb stack mai 
        {
            // agar stack mai less priority wala operator push karne sai pahela higher priority wale operators ko pop() kardena
            while(st.size()!=0 && priority(str[idx])<=priority(st.top()))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(str[idx]);
        }
        idx++;
    }
    while(st.size()!=0)
    {
        ans+=st.top();
        st.pop();
    }
    return ans;
}
int main()
{
          string str="(A+B)*C-D+F";
          cout<<"infix expression is "<<str<<endl;
          cout<<"postfix expression is "<<infix_to_postfix(str);
}