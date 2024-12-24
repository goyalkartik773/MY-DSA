#include <iostream>
#include <stack>
using namespace std;
string postfix_to_infix(string str)
{ // t2 operator t1 ')' ko string banakar stack mai push kardo
    stack<string> st;
    int idx = 0;
    while (idx < str.size())
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
            ans += "(" + t2 + str[idx] + t1 + ")";
            st.push(ans);
        }
        idx++;
    }
    return st.top();
}
using namespace std;
int main()
{
    string str = "AB-DE+F*/";
    cout << "postfix expression is " << str << endl;
    cout << "infix expression is " << postfix_to_infix(str);
}