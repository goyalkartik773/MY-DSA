#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
int priority(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}
void reverse_infix(string &str)
{
    char temp;
    for (int i = 0; i < str.length() / 2; i++)
    {
        temp = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = temp;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ')')
        {
            str[i] = '(';
        }
        else if (str[i] == '(')
        {
            str[i] = ')'; 
        }
    }
}
string infix_to_prefix(string str)
{
    // three steps
    // step 1 reverse your infix expression
    reverse_infix(str);
    // step 2 infix to postfix wali conversion ka logic lagayega with one small change ki same presidence wale operator ko bhi stack mai push karge pop nahi karega
    int idx = 0;
    stack<char> st;
    string ans;
    while (idx <str.size())
    {
        if (str[idx] == 'A' && str[idx] == 'Z' || str[idx] == 'a' && str[idx] == 'z' || str[idx] == '0' && str[idx] == '9')
        {
            ans += str[idx];
        }
        else if (str[idx] == '(')
            st.push(str[idx]);
        else if (str[idx] == ')')
        {
            while (st.size() != 0 && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (st.size()!=0 && priority(str[idx]) < priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(str[idx]);
        }
        idx++;
    }
    while (st.size() != 0)
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string str = "(A+B)*C-D+F";
    cout<<"infix expression is : "<<str<<endl;
    cout<<"prefix expression is :"<<infix_to_prefix(str);
}